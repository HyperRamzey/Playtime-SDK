#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MediaCapture.hpp"
#include "MediaOutput.hpp"
int32_t& _Script_MediaIOCore::MediaOutput::get_NumberOfTextureBuffers() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::MediaOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaIOCore.MediaOutput");
    return result;
}
bool _Script_MediaIOCore::MediaOutput::Validate(void*& OutFailureReason) {
    return;
}
_Script_MediaIOCore::MediaCapture* _Script_MediaIOCore::MediaOutput::CreateMediaCapture() {
    return;
}
