#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "BandwidthTestActor.hpp"
void* _Script_Engine::BandwidthTestActor::get_BandwidthGenerator() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_Engine::BandwidthTestActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BandwidthTestActor");
    return result;
}
