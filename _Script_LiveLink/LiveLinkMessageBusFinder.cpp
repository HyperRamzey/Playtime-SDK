#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
#include "LiveLinkMessageBusFinder.hpp"
#include "ProviderPollResult.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSourceHandle.hpp"
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkMessageBusFinder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkMessageBusFinder");
    return result;
}
void _Script_LiveLink::LiveLinkMessageBusFinder::GetAvailableProviders(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, float Duration, void*& AvailableProviders) {
    return;
}
_Script_LiveLink::LiveLinkMessageBusFinder* _Script_LiveLink::LiveLinkMessageBusFinder::ConstructMessageBusFinder() {
    return;
}
void _Script_LiveLink::LiveLinkMessageBusFinder::ConnectToProvider(_Script_LiveLink::ProviderPollResult& Provider, _Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle) {
    return;
}
