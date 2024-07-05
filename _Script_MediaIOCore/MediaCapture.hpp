#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MediaCaptureOptions.hpp"
namespace _Script_MediaIOCore {
struct MediaOutput;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_MediaIOCore {
#pragma pack(push, 1)
struct MediaCapture : public _Script_CoreUObject::Object {
    private: char pad_28[0xe0]; public:
    void* get_OnStateChanged();
    _Script_MediaIOCore::MediaOutput*& get_MediaOutput();
    _Script_Engine::TextureRenderTarget2D*& get_CapturingRenderTarget();
    static _Script_CoreUObject::Class* static_class();
    bool UpdateTextureRenderTarget2D(_Script_Engine::TextureRenderTarget2D* RenderTarget);
    void StopCapture(bool bAllowPendingFrameToBeProcess);
    void SetMediaOutput(_Script_MediaIOCore::MediaOutput* InMediaOutput);
    void* GetState();
    _Script_CoreUObject::IntPoint GetDesiredSize();
    void* GetDesiredPixelFormat();
    bool CaptureTextureRenderTarget2D(_Script_Engine::TextureRenderTarget2D* RenderTarget, _Script_MediaIOCore::MediaCaptureOptions CaptureOptions);
    bool CaptureActiveSceneViewport(_Script_MediaIOCore::MediaCaptureOptions CaptureOptions);
}; // Size: 0x108
#pragma pack(pop)
}
