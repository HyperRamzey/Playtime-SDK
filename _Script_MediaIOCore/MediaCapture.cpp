#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\TextureRenderTarget2D.hpp"
#include "MediaCapture.hpp"
#include "MediaCaptureOptions.hpp"
#include "MediaOutput.hpp"
void* _Script_MediaIOCore::MediaCapture::GetState() {
    return;
}
void* _Script_MediaIOCore::MediaCapture::get_OnStateChanged() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_MediaIOCore::MediaOutput*& _Script_MediaIOCore::MediaCapture::get_MediaOutput() {
    return *(_Script_MediaIOCore::MediaOutput**)((uintptr_t)this + 0x50);
}
bool _Script_MediaIOCore::MediaCapture::UpdateTextureRenderTarget2D(_Script_Engine::TextureRenderTarget2D* RenderTarget) {
    return;
}
_Script_Engine::TextureRenderTarget2D*& _Script_MediaIOCore::MediaCapture::get_CapturingRenderTarget() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::MediaCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaIOCore.MediaCapture");
    return result;
}
void _Script_MediaIOCore::MediaCapture::StopCapture(bool bAllowPendingFrameToBeProcess) {
    return;
}
void _Script_MediaIOCore::MediaCapture::SetMediaOutput(_Script_MediaIOCore::MediaOutput* InMediaOutput) {
    return;
}
_Script_CoreUObject::IntPoint _Script_MediaIOCore::MediaCapture::GetDesiredSize() {
    return;
}
void* _Script_MediaIOCore::MediaCapture::GetDesiredPixelFormat() {
    return;
}
bool _Script_MediaIOCore::MediaCapture::CaptureTextureRenderTarget2D(_Script_Engine::TextureRenderTarget2D* RenderTarget, _Script_MediaIOCore::MediaCaptureOptions CaptureOptions) {
    return;
}
bool _Script_MediaIOCore::MediaCapture::CaptureActiveSceneViewport(_Script_MediaIOCore::MediaCaptureOptions CaptureOptions) {
    return;
}
