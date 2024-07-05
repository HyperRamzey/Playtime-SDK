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
struct TOPNode : public _Script_CoreUObject::Object {
    private: char pad_28[0x3f8]; public:
    int32_t& get_NodeId();
    void* get_NodeName();
    void* get_NodePath();
    void* get_ParentName();
    _Script_CoreUObject::Object*& get_WorkResultParent();
    void* get_WorkResult();
    bool get_bHidden();
    void set_bHidden(bool value);
    bool get_bAutoLoad();
    void set_bAutoLoad(bool value);
    void* get_NodeState();
    bool get_bCachedHaveNotLoadedWorkResults();
    void set_bCachedHaveNotLoadedWorkResults(bool value);
    bool get_bCachedHaveLoadedWorkResults();
    void set_bCachedHaveLoadedWorkResults(bool value);
    bool get_bHasChildNodes();
    void set_bHasChildNodes(bool value);
    void* get_ClearedLandscapeLayers();
    bool get_bShow();
    void set_bShow(bool value);
    void* get_BakedWorkResultObjectOutputs();
    void* get_WorkItemTally();
    void* get_AggregatedWorkItemTally();
    bool get_bHasReceivedCookCompleteEvent();
    void set_bHasReceivedCookCompleteEvent(bool value);
    void* get_OutputActorOwner();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x420
#pragma pack(pop)
}
