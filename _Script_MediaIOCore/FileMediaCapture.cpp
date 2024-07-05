#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FileMediaCapture.hpp"
#include "MediaCapture.hpp"
_Script_CoreUObject::Class* _Script_MediaIOCore::FileMediaCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaIOCore.FileMediaCapture");
    return result;
}
