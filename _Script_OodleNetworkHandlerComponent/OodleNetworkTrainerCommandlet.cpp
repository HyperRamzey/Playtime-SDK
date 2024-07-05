#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Commandlet.hpp"
#include "OodleNetworkTrainerCommandlet.hpp"
int32_t& _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::get_TrialRandomness() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
bool _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::get_bCompressionTest() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::set_bCompressionTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::get_TrialGenerations() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
int32_t& _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::get_HashTableSize() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
int32_t& _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::get_DictionarySize() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
int32_t& _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::get_DictionaryTrials() {
    return *(int32_t*)((uintptr_t)this + 0x8c);
}
bool _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::get_bNoTrials() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::set_bNoTrials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_OodleNetworkHandlerComponent::OodleNetworkTrainerCommandlet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet");
    return result;
}
