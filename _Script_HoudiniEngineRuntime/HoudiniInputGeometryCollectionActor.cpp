#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputGeometryCollectionActor.hpp"
#include "HoudiniInputObject.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputGeometryCollectionActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputGeometryCollectionActor");
    return result;
}
