#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ParkourObject : public _Script_Engine::Actor {
    private: char pad_220[0x48]; public:
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Script_Engine::BoxComponent*& get_Trigger_A();
    _Script_Engine::BoxComponent*& get_Trigger_B();
    _Script_Engine::TextRenderComponent*& get_Label_A();
    _Script_Engine::TextRenderComponent*& get_Label_B();
    void* get_ParkourType();
    _Script_UMG::UserWidget*& get_ParkourWidget();
    _Script_Engine::AnimMontage*& get_ParkourMontage();
    bool get_bOneSided();
    void set_bOneSided(bool value);
    float& get_Width();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector GetParkourStartLocation(_Script_Engine::PrimitiveComponent* OverlappingComponent);
    _Script_CoreUObject::Vector GetParkourEndLocation(_Script_Engine::PrimitiveComponent* OverlappingComponent);
    float GetParkourDistance(_Script_CoreUObject::Vector StartLocation, _Script_CoreUObject::Vector EndLocation);
    void EndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    bool CanSetParkour(_Script_Engine::Actor* Actor, _Script_Engine::PrimitiveComponent* Comp);
    void BeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
}; // Size: 0x268
#pragma pack(pop)
}
