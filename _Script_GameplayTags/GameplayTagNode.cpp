#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagNode.hpp"
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTagNode");
    return result;
}