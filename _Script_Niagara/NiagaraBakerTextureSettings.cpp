#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "NiagaraBakerTextureSettings.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraBakerTextureSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraBakerTextureSettings");
    return result;
}
void* _Script_Niagara::NiagaraBakerTextureSettings::get_FrameSize() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Niagara::NiagaraBakerTextureSettings::get_OutputName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraBakerTextureSettings::get_SourceBinding() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Niagara::NiagaraBakerTextureSettings::get_bUseFrameSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraBakerTextureSettings::set_bUseFrameSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Texture2D*& _Script_Niagara::NiagaraBakerTextureSettings::get_GeneratedTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraBakerTextureSettings::get_TextureSize() {
    return (void*)((uintptr_t)this + 0x1c);
}
