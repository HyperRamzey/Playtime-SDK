#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniPDGAssetLink : public _Script_CoreUObject::Object {
    private: char pad_28[0x108]; public:
    void* get_AssetName();
    void* get_AssetNodePath();
    int32_t& get_AssetId();
    void* get_AllTOPNetworks();
    int32_t& get_SelectedTOPNetworkIndex();
    void* get_LinkState();
    bool get_bAutoCook();
    void set_bAutoCook(bool value);
    bool get_bUseTOPNodeFilter();
    void set_bUseTOPNodeFilter(bool value);
    bool get_bUseTOPOutputFilter();
    void set_bUseTOPOutputFilter(bool value);
    void* get_TOPNodeFilter();
    void* get_TOPOutputFilter();
    int32_t& get_NumWorkitems();
    void* get_WorkItemTally();
    void* get_OutputCachePath();
    bool get_bNeedsUIRefresh();
    void set_bNeedsUIRefresh(bool value);
    _Script_Engine::Actor*& get_OutputParentActor();
    void* get_BakeFolder();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
