#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_ApplyMeshSpaceAdditive.hpp"
#include "AnimNode_Base.hpp"
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_Base() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_Additive() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::set_bAlphaBoolEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_AlphaInputType() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_bAlphaBoolEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_AlphaBoolBlend() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_AlphaCurveName() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_AlphaScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x98);
}
int32_t& _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_ApplyMeshSpaceAdditive");
    return result;
}
