#pragma once

#include "AssetNode.h"

#include "File/File.h"

namespace Undo
{
    class Command;
    typedef Nocturnal::SmartPtr< Command > CommandPtr;
}

// Forwards
namespace Asset
{
    struct AssetTypeChangeArgs;
}

namespace UIToolKit
{
    struct PreferenceChangedArgs;
}

namespace Luna
{
    // Forwards
    class Enumerator;
    struct CreatePanelArgs;
    class AssetManager;
    class AttributeContainer;
    class AttributeWrapper;
    class AttributeNode;
    struct AssetLoadArgs;
    struct DocumentChangedArgs;

    /////////////////////////////////////////////////////////////////////////////
    // Node that references an Luna::AssetClass (which may or may not be loaded yet).
    // 
    class AssetReferenceNode : public Luna::AssetNode
    {
    private:
        Luna::AssetClass* m_Asset;
        File::ReferencePtr m_AssetFileReference;
        Reflect::Element* m_Element;
        const Reflect::Field* m_Field;
        Luna::AttributeContainer* m_AttributeContainer;

    public:
        // Runtime Type Info
        LUNA_DECLARE_TYPE( Luna::AssetReferenceNode, Luna::AssetNode );
        static void InitializeType();
        static void CleanupType();

    public:
        AssetReferenceNode( Luna::AssetManager* manager, File::Reference& assetFileReference, const Reflect::Field* field );
        virtual ~AssetReferenceNode();
        virtual Luna::AssetClass* GetAssetClass() const NOC_OVERRIDE;
        virtual void CreateChildren();
        virtual void ActivateItem() NOC_OVERRIDE;
        void Load();
        void Unload();
        File::ReferencePtr GetAssetFileReference() const;
        void SetAssetFileReference( File::ReferencePtr fileRef );
        void AssociateField( Reflect::Element* element, const Reflect::Field* field );
        bool IsFieldAssociated() const;
        virtual void ConnectProperties( EnumerateElementArgs& args ) NOC_OVERRIDE;
        bool ValidatePanel( const std::string& name ) NOC_OVERRIDE;
        virtual void PreShowContextMenu() NOC_OVERRIDE;
        virtual bool CanBeCopied() const NOC_OVERRIDE;
        virtual Inspect::ReflectClipboardDataPtr GetClipboardData() NOC_OVERRIDE;
        virtual bool CanHandleClipboardData( const Inspect::ReflectClipboardDataPtr& data ) NOC_OVERRIDE;
        virtual bool HandleClipboardData( const Inspect::ReflectClipboardDataPtr& data, ClipboardOperation op, Undo::BatchCommand* batch = NULL ) NOC_OVERRIDE;

        // Helpers
    private:
        Luna::AttributeNode* FindAttributeNode( Luna::AttributeWrapper* attribute );
        Undo::CommandPtr GetAddAttributeCommand( Luna::AttributeWrapper* attribute );
        Undo::CommandPtr GetRemoveAttributeCommand( Luna::AttributeWrapper* attribute );
        friend class AttributeExistenceCommand;

        static void CreatePanel( CreatePanelArgs& args );
        std::string GetFileName() const;
        std::string GetFilePath() const;
        void SetFilePath( const std::string& path );
        std::string GetAssetTypeName() const;
        std::string MakeLabel() const;
        std::string MakeIcon() const;

        // Callbacks
    private:
        void AssetUnloading( const AssetLoadArgs& args );
        void PreferenceChanged( const Reflect::ElementChangeArgs& args );
        void DocumentModified( const DocumentChangedArgs& args );
        void OnElementChanged( const Reflect::ElementChangeArgs& args );
        void AssetTypeChanged( const Asset::AssetTypeChangeArgs& args );

        void OnOpen( const ContextMenuArgsPtr& args );
        void OnChangePath( const ContextMenuArgsPtr& args );
        void OnChangePathFinder( const ContextMenuArgsPtr& args );
        void OnCheckOutPath( const ContextMenuArgsPtr& args );
        void OnRevisionHistory( const ContextMenuArgsPtr& args );
    };

    typedef Nocturnal::SmartPtr< Luna::AssetReferenceNode > AssetReferenceNodePtr;
}
