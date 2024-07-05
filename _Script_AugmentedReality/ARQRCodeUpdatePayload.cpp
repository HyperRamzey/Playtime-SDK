#include "..\FUObjectArray.hpp"
#include "ARQRCodeUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARQRCodeUpdatePayload::get_SessionPayload() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AugmentedReality::ARQRCodeUpdatePayload::get_Extents() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_AugmentedReality::ARQRCodeUpdatePayload::get_WorldTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AugmentedReality::ARQRCodeUpdatePayload::get_QRCode() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARQRCodeUpdatePayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARQRCodeUpdatePayload");
    return result;
}
