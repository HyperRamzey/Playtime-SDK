#include "..\FUObjectArray.hpp"
#include "ARPointUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPointUpdatePayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARPointUpdatePayload");
    return result;
}
