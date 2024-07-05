#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "MagicLeapARPinContentBindings.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinContentBindings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapARPin.MagicLeapARPinContentBindings");
    return result;
}
void* _Script_MagicLeapARPin::MagicLeapARPinContentBindings::get_AllContentBindings() {
    return (void*)((uintptr_t)this + 0x28);
}
