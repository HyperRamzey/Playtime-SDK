#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSubSectionData.hpp"
void* _Script_LiveLinkMovieScene::LiveLinkSubSectionData::get_Properties() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkMovieScene::LiveLinkSubSectionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMovieScene.LiveLinkSubSectionData");
    return result;
}
