#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniParameter : public _Script_CoreUObject::Object {
    private: char pad_28[0xe0]; public:
    void* get_Name();
    void* get_Label();
    void* get_ParmType();
    void* get_TupleSize();
    int32_t& get_NodeId();
    int32_t& get_ParmId();
    int32_t& get_ParentParmId();
    int32_t& get_ChildIndex();
    bool get_bIsVisible();
    void set_bIsVisible(bool value);
    bool get_bIsParentFolderVisible();
    void set_bIsParentFolderVisible(bool value);
    bool get_bIsDisabled();
    void set_bIsDisabled(bool value);
    bool get_bHasChanged();
    void set_bHasChanged(bool value);
    bool get_bNeedsToTriggerUpdate();
    void set_bNeedsToTriggerUpdate(bool value);
    bool get_bIsDefault();
    void set_bIsDefault(bool value);
    bool get_bIsSpare();
    void set_bIsSpare(bool value);
    bool get_bJoinNext();
    void set_bJoinNext(bool value);
    bool get_bIsChildOfMultiParm();
    void set_bIsChildOfMultiParm(bool value);
    bool get_bIsDirectChildOfMultiParm();
    void set_bIsDirectChildOfMultiParm(bool value);
    bool get_bPendingRevertToDefault();
    void set_bPendingRevertToDefault(bool value);
    void* get_TuplePendingRevertToDefault();
    void* get_Help();
    void* get_TagCount();
    int32_t& get_ValueIndex();
    bool get_bHasExpression();
    void set_bHasExpression(bool value);
    bool get_bShowExpression();
    void set_bShowExpression(bool value);
    void* get_ParamExpression();
    void* get_Tags();
    bool get_bAutoUpdate();
    void set_bAutoUpdate(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
