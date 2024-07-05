#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkPropertyData.hpp"
void* _Script_LiveLinkMovieScene::LiveLinkPropertyData::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkMovieScene::LiveLinkPropertyData::get_FloatChannel() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_LiveLinkMovieScene::LiveLinkPropertyData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMovieScene.LiveLinkPropertyData");
    return result;
}
void* _Script_LiveLinkMovieScene::LiveLinkPropertyData::get_StringChannel() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_LiveLinkMovieScene::LiveLinkPropertyData::get_IntegerChannel() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_LiveLinkMovieScene::LiveLinkPropertyData::get_BoolChannel() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_LiveLinkMovieScene::LiveLinkPropertyData::get_ByteChannel() {
    return (void*)((uintptr_t)this + 0x48);
}
