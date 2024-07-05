#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaIOConnection.hpp"
void* _Script_MediaIOCore::MediaIOConnection::get_QuadTransportType() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MediaIOCore::MediaIOConnection::get_Device() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MediaIOCore::MediaIOConnection::get_TransportType() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_MediaIOCore::MediaIOConnection::get_protocol() {
    return (void*)((uintptr_t)this + 0xc);
}
int32_t& _Script_MediaIOCore::MediaIOConnection::get_PortIdentifier() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::MediaIOConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaIOCore.MediaIOConnection");
    return result;
}
