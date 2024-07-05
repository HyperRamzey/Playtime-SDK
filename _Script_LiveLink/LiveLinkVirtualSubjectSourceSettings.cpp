#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkVirtualSubjectSourceSettings.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSourceSettings.hpp"
void* _Script_LiveLink::LiveLinkVirtualSubjectSourceSettings::get_SourceName() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkVirtualSubjectSourceSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings");
    return result;
}
