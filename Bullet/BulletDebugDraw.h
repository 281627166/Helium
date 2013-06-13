
#include "Bullet/Bullet.h"
#include "Framework/TaskScheduler.h"

// It is advised that you DO NOT include this file from anything but Bullet .cpp files. There's no need
// for any other system to use this class

namespace Helium
{
	class BufferedDrawer;

	class BulletDebugDrawer : public btIDebugDraw
	{
	public:
		BulletDebugDrawer( BufferedDrawer &pBufferedDrawer, int debugMode );

		virtual void drawLine( const btVector3& from, const btVector3& to, const btVector3& color );
		virtual void drawContactPoint( const btVector3& PointOnB, const btVector3& normalOnB, btScalar distance, int lifeTime, const btVector3& color );
		virtual void reportErrorWarning( const char* warningString );
		virtual void draw3dText( const btVector3& location,const char* textString );
		virtual void setDebugMode( int debugMode );
		virtual int getDebugMode() const;

	private:
		BufferedDrawer &m_pDrawer;
		int m_DebugMode;
	};


	struct HELIUM_BULLET_API DrawDebugPhysics : public Helium::TaskDefinition
	{
		HELIUM_DECLARE_TASK(DrawDebugPhysics)

		virtual void DefineContract(Helium::TaskContract &rContract);
	};
}