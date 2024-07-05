#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkTimeSynchronizationSource.hpp"
#include "..\_Script_TimeManagement\TimeSynchronizationSource.hpp"
void* _Script_LiveLink::LiveLinkTimeSynchronizationSource::get_SubjectName() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkTimeSynchronizationSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkTimeSynchronizationSource");
    return result;
}
