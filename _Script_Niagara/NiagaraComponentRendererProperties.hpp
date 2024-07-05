#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraComponentRendererProperties : public NiagaraRendererProperties {
    private: char pad_78[0x138]; public:
    void* get_ComponentType();
    void* get_ComponentCountLimit();
    void* get_EnabledBinding();
    void* get_RendererVisibilityTagBinding();
    bool get_bAssignComponentsOnParticleID();
    void set_bAssignComponentsOnParticleID(bool value);
    bool get_bOnlyCreateComponentsOnParticleSpawn();
    void set_bOnlyCreateComponentsOnParticleSpawn(bool value);
    int32_t& get_RendererVisibility();
    _Script_Engine::SceneComponent*& get_TemplateComponent();
    void* get_PropertyBindings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b0
#pragma pack(pop)
}
