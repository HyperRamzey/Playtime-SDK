#include "..\FUObjectArray.hpp"
#include "BTCompositeNode.hpp"
#include "BTComposite_Sequence.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BTComposite_Sequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTComposite_Sequence");
    return result;
}