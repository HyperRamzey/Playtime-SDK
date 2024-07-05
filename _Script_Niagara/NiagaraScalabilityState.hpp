#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraScalabilityState {
    private: char pad_0[0x8]; public:
    float& get_Significance();
    bool get_bCulled();
    void set_bCulled(bool value);
    bool get_bPreviousCulled();
    void set_bPreviousCulled(bool value);
    bool get_bCulledByDistance();
    void set_bCulledByDistance(bool value);
    bool get_bCulledByInstanceCount();
    void set_bCulledByInstanceCount(bool value);
    bool get_bCulledByVisibility();
    void set_bCulledByVisibility(bool value);
    bool get_bCulledByGlobalBudget();
    void set_bCulledByGlobalBudget(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
