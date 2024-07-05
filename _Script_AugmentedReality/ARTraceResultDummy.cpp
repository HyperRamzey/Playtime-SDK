#include "..\FUObjectArray.hpp"
#include "ARTraceResultDummy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTraceResultDummy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTraceResultDummy");
    return result;
}
