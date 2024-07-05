#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "HoudiniHandleComponent_V1.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniHandleComponent_V1::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent_V1");
    return result;
}
