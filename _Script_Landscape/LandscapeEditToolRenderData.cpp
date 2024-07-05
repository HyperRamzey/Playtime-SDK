#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "LandscapeEditToolRenderData.hpp"
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeEditToolRenderData::get_LayerContributionTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x28);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeEditToolRenderData::get_ToolMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x0);
}
int32_t& _Script_Landscape::LandscapeEditToolRenderData::get_DebugChannelR() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Landscape::LandscapeEditToolRenderData::get_SelectedType() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeEditToolRenderData::get_GizmoMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x8);
}
int32_t& _Script_Landscape::LandscapeEditToolRenderData::get_DebugChannelB() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Landscape::LandscapeEditToolRenderData::get_DebugChannelG() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeEditToolRenderData::get_DataTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x20);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeEditToolRenderData::get_DirtyTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeEditToolRenderData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeEditToolRenderData");
    return result;
}
