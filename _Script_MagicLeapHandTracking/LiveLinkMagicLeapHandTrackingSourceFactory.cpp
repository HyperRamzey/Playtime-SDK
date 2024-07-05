#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSourceFactory.hpp"
#include "LiveLinkMagicLeapHandTrackingSourceFactory.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapHandTracking::LiveLinkMagicLeapHandTrackingSourceFactory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory");
    return result;
}
