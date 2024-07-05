#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConvolutionBloomSettings.hpp"
#include "Texture2D.hpp"
float& _Script_Engine::ConvolutionBloomSettings::get_PreFilterMin() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_Engine::Texture2D*& _Script_Engine::ConvolutionBloomSettings::get_Texture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::ConvolutionBloomSettings::get_Size() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ConvolutionBloomSettings::get_CenterUV() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::ConvolutionBloomSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ConvolutionBloomSettings");
    return result;
}
float& _Script_Engine::ConvolutionBloomSettings::get_BufferScale() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::ConvolutionBloomSettings::get_PreFilterMax() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::ConvolutionBloomSettings::get_PreFilterMult() {
    return *(float*)((uintptr_t)this + 0x1c);
}