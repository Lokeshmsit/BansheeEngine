#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "Wrappers/BsScriptComponent.h"
#include "BsScriptCCollider.generated.h"

namespace bs
{
	class CCapsuleCollider;

	class BS_SCR_BE_EXPORT ScriptCCapsuleCollider : public TScriptComponent<ScriptCCapsuleCollider, CCapsuleCollider, ScriptCColliderBase>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "CapsuleCollider")

		ScriptCCapsuleCollider(MonoObject* managedInstance, const GameObjectHandle<CCapsuleCollider>& value);

	private:
		static void Internal_setNormal(ScriptCCapsuleCollider* thisPtr, Vector3* normal);
		static void Internal_getNormal(ScriptCCapsuleCollider* thisPtr, Vector3* __output);
		static void Internal_setCenter(ScriptCCapsuleCollider* thisPtr, Vector3* center);
		static void Internal_getCenter(ScriptCCapsuleCollider* thisPtr, Vector3* __output);
		static void Internal_setHalfHeight(ScriptCCapsuleCollider* thisPtr, float halfHeight);
		static float Internal_getHalfHeight(ScriptCCapsuleCollider* thisPtr);
		static void Internal_setRadius(ScriptCCapsuleCollider* thisPtr, float radius);
		static float Internal_getRadius(ScriptCCapsuleCollider* thisPtr);
	};
}
