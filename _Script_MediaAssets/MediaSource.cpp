#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MediaSource.hpp"
_Script_CoreUObject::Class* _Script_MediaAssets::MediaSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaSource");
    return result;
}
bool _Script_MediaAssets::MediaSource::Validate() {
    return;
}
void _Script_MediaAssets::MediaSource::SetMediaOptionString(void*& Key, void* Value) {
    return;
}
void _Script_MediaAssets::MediaSource::SetMediaOptionInt64(void*& Key, void* Value) {
    return;
}
void* _Script_MediaAssets::MediaSource::GetURL() {
    return;
}
void _Script_MediaAssets::MediaSource::SetMediaOptionBool(void*& Key, bool Value) {
    return;
}
void _Script_MediaAssets::MediaSource::SetMediaOptionFloat(void*& Key, float Value) {
    return;
}
