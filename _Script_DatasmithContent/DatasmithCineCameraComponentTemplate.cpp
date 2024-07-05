#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithCineCameraComponentTemplate.hpp"
#include "DatasmithObjectTemplate.hpp"
void* _Script_DatasmithContent::DatasmithCineCameraComponentTemplate::get_LensSettings() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_DatasmithContent::DatasmithCineCameraComponentTemplate::get_FilmbackSettings() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithCineCameraComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithCineCameraComponentTemplate");
    return result;
}
void* _Script_DatasmithContent::DatasmithCineCameraComponentTemplate::get_FocusSettings() {
    return (void*)((uintptr_t)this + 0x3c);
}
float& _Script_DatasmithContent::DatasmithCineCameraComponentTemplate::get_CurrentFocalLength() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_DatasmithContent::DatasmithCineCameraComponentTemplate::get_PostProcessSettings() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_DatasmithContent::DatasmithCineCameraComponentTemplate::get_CurrentAperture() {
    return *(float*)((uintptr_t)this + 0x48);
}
