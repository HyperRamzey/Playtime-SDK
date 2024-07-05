#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeProxy.hpp"
#include "LandscapeStreamingProxy.hpp"
void* _Script_Landscape::LandscapeStreamingProxy::get_LandscapeActor() {
    return (void*)((uintptr_t)this + 0x598);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeStreamingProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeStreamingProxy");
    return result;
}
