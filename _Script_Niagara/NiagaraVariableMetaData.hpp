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
struct NiagaraVariableMetaData {
    private: char pad_0[0xe0]; public:
    void* get_Description();
    void* get_CategoryName();
    bool get_bAdvancedDisplay();
    void set_bAdvancedDisplay(bool value);
    int32_t& get_EditorSortPriority();
    bool get_bInlineEditConditionToggle();
    void set_bInlineEditConditionToggle(bool value);
    void* get_EditCondition();
    void* get_VisibleCondition();
    void* get_PropertyMetaData();
    void* get_ParentAttribute();
    void* get_VariableGuid();
    bool get_bIsStaticSwitch();
    void set_bIsStaticSwitch(bool value);
    int32_t& get_StaticSwitchDefaultValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
