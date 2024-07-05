#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
struct TextureCube;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PostProcessSettings {
    private: char pad_0[0x560]; public:
    bool get_bOverride_TemperatureType();
    void set_bOverride_TemperatureType(bool value);
    bool get_bOverride_WhiteTemp();
    void set_bOverride_WhiteTemp(bool value);
    bool get_bOverride_WhiteTint();
    void set_bOverride_WhiteTint(bool value);
    bool get_bOverride_ColorSaturation();
    void set_bOverride_ColorSaturation(bool value);
    bool get_bOverride_ColorContrast();
    void set_bOverride_ColorContrast(bool value);
    bool get_bOverride_ColorGamma();
    void set_bOverride_ColorGamma(bool value);
    bool get_bOverride_ColorGain();
    void set_bOverride_ColorGain(bool value);
    bool get_bOverride_ColorOffset();
    void set_bOverride_ColorOffset(bool value);
    bool get_bOverride_ColorSaturationShadows();
    void set_bOverride_ColorSaturationShadows(bool value);
    bool get_bOverride_ColorContrastShadows();
    void set_bOverride_ColorContrastShadows(bool value);
    bool get_bOverride_ColorGammaShadows();
    void set_bOverride_ColorGammaShadows(bool value);
    bool get_bOverride_ColorGainShadows();
    void set_bOverride_ColorGainShadows(bool value);
    bool get_bOverride_ColorOffsetShadows();
    void set_bOverride_ColorOffsetShadows(bool value);
    bool get_bOverride_ColorSaturationMidtones();
    void set_bOverride_ColorSaturationMidtones(bool value);
    bool get_bOverride_ColorContrastMidtones();
    void set_bOverride_ColorContrastMidtones(bool value);
    bool get_bOverride_ColorGammaMidtones();
    void set_bOverride_ColorGammaMidtones(bool value);
    bool get_bOverride_ColorGainMidtones();
    void set_bOverride_ColorGainMidtones(bool value);
    bool get_bOverride_ColorOffsetMidtones();
    void set_bOverride_ColorOffsetMidtones(bool value);
    bool get_bOverride_ColorSaturationHighlights();
    void set_bOverride_ColorSaturationHighlights(bool value);
    bool get_bOverride_ColorContrastHighlights();
    void set_bOverride_ColorContrastHighlights(bool value);
    bool get_bOverride_ColorGammaHighlights();
    void set_bOverride_ColorGammaHighlights(bool value);
    bool get_bOverride_ColorGainHighlights();
    void set_bOverride_ColorGainHighlights(bool value);
    bool get_bOverride_ColorOffsetHighlights();
    void set_bOverride_ColorOffsetHighlights(bool value);
    bool get_bOverride_ColorCorrectionShadowsMax();
    void set_bOverride_ColorCorrectionShadowsMax(bool value);
    bool get_bOverride_ColorCorrectionHighlightsMin();
    void set_bOverride_ColorCorrectionHighlightsMin(bool value);
    bool get_bOverride_BlueCorrection();
    void set_bOverride_BlueCorrection(bool value);
    bool get_bOverride_ExpandGamut();
    void set_bOverride_ExpandGamut(bool value);
    bool get_bOverride_ToneCurveAmount();
    void set_bOverride_ToneCurveAmount(bool value);
    bool get_bOverride_FilmWhitePoint();
    void set_bOverride_FilmWhitePoint(bool value);
    bool get_bOverride_FilmSaturation();
    void set_bOverride_FilmSaturation(bool value);
    bool get_bOverride_FilmChannelMixerRed();
    void set_bOverride_FilmChannelMixerRed(bool value);
    bool get_bOverride_FilmChannelMixerGreen();
    void set_bOverride_FilmChannelMixerGreen(bool value);
    bool get_bOverride_FilmChannelMixerBlue();
    void set_bOverride_FilmChannelMixerBlue(bool value);
    bool get_bOverride_FilmContrast();
    void set_bOverride_FilmContrast(bool value);
    bool get_bOverride_FilmDynamicRange();
    void set_bOverride_FilmDynamicRange(bool value);
    bool get_bOverride_FilmHealAmount();
    void set_bOverride_FilmHealAmount(bool value);
    bool get_bOverride_FilmToeAmount();
    void set_bOverride_FilmToeAmount(bool value);
    bool get_bOverride_FilmShadowTint();
    void set_bOverride_FilmShadowTint(bool value);
    bool get_bOverride_FilmShadowTintBlend();
    void set_bOverride_FilmShadowTintBlend(bool value);
    bool get_bOverride_FilmShadowTintAmount();
    void set_bOverride_FilmShadowTintAmount(bool value);
    bool get_bOverride_FilmSlope();
    void set_bOverride_FilmSlope(bool value);
    bool get_bOverride_FilmToe();
    void set_bOverride_FilmToe(bool value);
    bool get_bOverride_FilmShoulder();
    void set_bOverride_FilmShoulder(bool value);
    bool get_bOverride_FilmBlackClip();
    void set_bOverride_FilmBlackClip(bool value);
    bool get_bOverride_FilmWhiteClip();
    void set_bOverride_FilmWhiteClip(bool value);
    bool get_bOverride_SceneColorTint();
    void set_bOverride_SceneColorTint(bool value);
    bool get_bOverride_SceneFringeIntensity();
    void set_bOverride_SceneFringeIntensity(bool value);
    bool get_bOverride_ChromaticAberrationStartOffset();
    void set_bOverride_ChromaticAberrationStartOffset(bool value);
    bool get_bOverride_AmbientCubemapTint();
    void set_bOverride_AmbientCubemapTint(bool value);
    bool get_bOverride_AmbientCubemapIntensity();
    void set_bOverride_AmbientCubemapIntensity(bool value);
    bool get_bOverride_BloomMethod();
    void set_bOverride_BloomMethod(bool value);
    bool get_bOverride_BloomIntensity();
    void set_bOverride_BloomIntensity(bool value);
    bool get_bOverride_BloomThreshold();
    void set_bOverride_BloomThreshold(bool value);
    bool get_bOverride_Bloom1Tint();
    void set_bOverride_Bloom1Tint(bool value);
    bool get_bOverride_Bloom1Size();
    void set_bOverride_Bloom1Size(bool value);
    bool get_bOverride_Bloom2Size();
    void set_bOverride_Bloom2Size(bool value);
    bool get_bOverride_Bloom2Tint();
    void set_bOverride_Bloom2Tint(bool value);
    bool get_bOverride_Bloom3Tint();
    void set_bOverride_Bloom3Tint(bool value);
    bool get_bOverride_Bloom3Size();
    void set_bOverride_Bloom3Size(bool value);
    bool get_bOverride_Bloom4Tint();
    void set_bOverride_Bloom4Tint(bool value);
    bool get_bOverride_Bloom4Size();
    void set_bOverride_Bloom4Size(bool value);
    bool get_bOverride_Bloom5Tint();
    void set_bOverride_Bloom5Tint(bool value);
    bool get_bOverride_Bloom5Size();
    void set_bOverride_Bloom5Size(bool value);
    bool get_bOverride_Bloom6Tint();
    void set_bOverride_Bloom6Tint(bool value);
    bool get_bOverride_Bloom6Size();
    void set_bOverride_Bloom6Size(bool value);
    bool get_bOverride_BloomSizeScale();
    void set_bOverride_BloomSizeScale(bool value);
    bool get_bOverride_BloomConvolutionTexture();
    void set_bOverride_BloomConvolutionTexture(bool value);
    bool get_bOverride_BloomConvolutionSize();
    void set_bOverride_BloomConvolutionSize(bool value);
    bool get_bOverride_BloomConvolutionCenterUV();
    void set_bOverride_BloomConvolutionCenterUV(bool value);
    bool get_bOverride_BloomConvolutionPreFilter();
    void set_bOverride_BloomConvolutionPreFilter(bool value);
    bool get_bOverride_BloomConvolutionPreFilterMin();
    void set_bOverride_BloomConvolutionPreFilterMin(bool value);
    bool get_bOverride_BloomConvolutionPreFilterMax();
    void set_bOverride_BloomConvolutionPreFilterMax(bool value);
    bool get_bOverride_BloomConvolutionPreFilterMult();
    void set_bOverride_BloomConvolutionPreFilterMult(bool value);
    bool get_bOverride_BloomConvolutionBufferScale();
    void set_bOverride_BloomConvolutionBufferScale(bool value);
    bool get_bOverride_BloomDirtMaskIntensity();
    void set_bOverride_BloomDirtMaskIntensity(bool value);
    bool get_bOverride_BloomDirtMaskTint();
    void set_bOverride_BloomDirtMaskTint(bool value);
    bool get_bOverride_BloomDirtMask();
    void set_bOverride_BloomDirtMask(bool value);
    bool get_bOverride_CameraShutterSpeed();
    void set_bOverride_CameraShutterSpeed(bool value);
    bool get_bOverride_CameraISO();
    void set_bOverride_CameraISO(bool value);
    bool get_bOverride_AutoExposureMethod();
    void set_bOverride_AutoExposureMethod(bool value);
    bool get_bOverride_AutoExposureLowPercent();
    void set_bOverride_AutoExposureLowPercent(bool value);
    bool get_bOverride_AutoExposureHighPercent();
    void set_bOverride_AutoExposureHighPercent(bool value);
    bool get_bOverride_AutoExposureMinBrightness();
    void set_bOverride_AutoExposureMinBrightness(bool value);
    bool get_bOverride_AutoExposureMaxBrightness();
    void set_bOverride_AutoExposureMaxBrightness(bool value);
    bool get_bOverride_AutoExposureCalibrationConstant();
    void set_bOverride_AutoExposureCalibrationConstant(bool value);
    bool get_bOverride_AutoExposureSpeedUp();
    void set_bOverride_AutoExposureSpeedUp(bool value);
    bool get_bOverride_AutoExposureSpeedDown();
    void set_bOverride_AutoExposureSpeedDown(bool value);
    bool get_bOverride_AutoExposureBias();
    void set_bOverride_AutoExposureBias(bool value);
    bool get_bOverride_AutoExposureBiasCurve();
    void set_bOverride_AutoExposureBiasCurve(bool value);
    bool get_bOverride_AutoExposureMeterMask();
    void set_bOverride_AutoExposureMeterMask(bool value);
    bool get_bOverride_AutoExposureApplyPhysicalCameraExposure();
    void set_bOverride_AutoExposureApplyPhysicalCameraExposure(bool value);
    bool get_bOverride_HistogramLogMin();
    void set_bOverride_HistogramLogMin(bool value);
    bool get_bOverride_HistogramLogMax();
    void set_bOverride_HistogramLogMax(bool value);
    bool get_bOverride_LensFlareIntensity();
    void set_bOverride_LensFlareIntensity(bool value);
    bool get_bOverride_LensFlareTint();
    void set_bOverride_LensFlareTint(bool value);
    bool get_bOverride_LensFlareTints();
    void set_bOverride_LensFlareTints(bool value);
    bool get_bOverride_LensFlareBokehSize();
    void set_bOverride_LensFlareBokehSize(bool value);
    bool get_bOverride_LensFlareBokehShape();
    void set_bOverride_LensFlareBokehShape(bool value);
    bool get_bOverride_LensFlareThreshold();
    void set_bOverride_LensFlareThreshold(bool value);
    bool get_bOverride_VignetteIntensity();
    void set_bOverride_VignetteIntensity(bool value);
    bool get_bOverride_GrainIntensity();
    void set_bOverride_GrainIntensity(bool value);
    bool get_bOverride_GrainJitter();
    void set_bOverride_GrainJitter(bool value);
    bool get_bOverride_AmbientOcclusionIntensity();
    void set_bOverride_AmbientOcclusionIntensity(bool value);
    bool get_bOverride_AmbientOcclusionStaticFraction();
    void set_bOverride_AmbientOcclusionStaticFraction(bool value);
    bool get_bOverride_AmbientOcclusionRadius();
    void set_bOverride_AmbientOcclusionRadius(bool value);
    bool get_bOverride_AmbientOcclusionFadeDistance();
    void set_bOverride_AmbientOcclusionFadeDistance(bool value);
    bool get_bOverride_AmbientOcclusionFadeRadius();
    void set_bOverride_AmbientOcclusionFadeRadius(bool value);
    bool get_bOverride_AmbientOcclusionDistance();
    void set_bOverride_AmbientOcclusionDistance(bool value);
    bool get_bOverride_AmbientOcclusionRadiusInWS();
    void set_bOverride_AmbientOcclusionRadiusInWS(bool value);
    bool get_bOverride_AmbientOcclusionPower();
    void set_bOverride_AmbientOcclusionPower(bool value);
    bool get_bOverride_AmbientOcclusionBias();
    void set_bOverride_AmbientOcclusionBias(bool value);
    bool get_bOverride_AmbientOcclusionQuality();
    void set_bOverride_AmbientOcclusionQuality(bool value);
    bool get_bOverride_AmbientOcclusionMipBlend();
    void set_bOverride_AmbientOcclusionMipBlend(bool value);
    bool get_bOverride_AmbientOcclusionMipScale();
    void set_bOverride_AmbientOcclusionMipScale(bool value);
    bool get_bOverride_AmbientOcclusionMipThreshold();
    void set_bOverride_AmbientOcclusionMipThreshold(bool value);
    bool get_bOverride_AmbientOcclusionTemporalBlendWeight();
    void set_bOverride_AmbientOcclusionTemporalBlendWeight(bool value);
    bool get_bOverride_RayTracingAO();
    void set_bOverride_RayTracingAO(bool value);
    bool get_bOverride_RayTracingAOSamplesPerPixel();
    void set_bOverride_RayTracingAOSamplesPerPixel(bool value);
    bool get_bOverride_RayTracingAOIntensity();
    void set_bOverride_RayTracingAOIntensity(bool value);
    bool get_bOverride_RayTracingAORadius();
    void set_bOverride_RayTracingAORadius(bool value);
    bool get_bOverride_LPVIntensity();
    void set_bOverride_LPVIntensity(bool value);
    bool get_bOverride_LPVDirectionalOcclusionIntensity();
    void set_bOverride_LPVDirectionalOcclusionIntensity(bool value);
    bool get_bOverride_LPVDirectionalOcclusionRadius();
    void set_bOverride_LPVDirectionalOcclusionRadius(bool value);
    bool get_bOverride_LPVDiffuseOcclusionExponent();
    void set_bOverride_LPVDiffuseOcclusionExponent(bool value);
    bool get_bOverride_LPVSpecularOcclusionExponent();
    void set_bOverride_LPVSpecularOcclusionExponent(bool value);
    bool get_bOverride_LPVDiffuseOcclusionIntensity();
    void set_bOverride_LPVDiffuseOcclusionIntensity(bool value);
    bool get_bOverride_LPVSpecularOcclusionIntensity();
    void set_bOverride_LPVSpecularOcclusionIntensity(bool value);
    bool get_bOverride_LPVSize();
    void set_bOverride_LPVSize(bool value);
    bool get_bOverride_LPVSecondaryOcclusionIntensity();
    void set_bOverride_LPVSecondaryOcclusionIntensity(bool value);
    bool get_bOverride_LPVSecondaryBounceIntensity();
    void set_bOverride_LPVSecondaryBounceIntensity(bool value);
    bool get_bOverride_LPVGeometryVolumeBias();
    void set_bOverride_LPVGeometryVolumeBias(bool value);
    bool get_bOverride_LPVVplInjectionBias();
    void set_bOverride_LPVVplInjectionBias(bool value);
    bool get_bOverride_LPVEmissiveInjectionIntensity();
    void set_bOverride_LPVEmissiveInjectionIntensity(bool value);
    bool get_bOverride_LPVFadeRange();
    void set_bOverride_LPVFadeRange(bool value);
    bool get_bOverride_LPVDirectionalOcclusionFadeRange();
    void set_bOverride_LPVDirectionalOcclusionFadeRange(bool value);
    bool get_bOverride_IndirectLightingColor();
    void set_bOverride_IndirectLightingColor(bool value);
    bool get_bOverride_IndirectLightingIntensity();
    void set_bOverride_IndirectLightingIntensity(bool value);
    bool get_bOverride_ColorGradingIntensity();
    void set_bOverride_ColorGradingIntensity(bool value);
    bool get_bOverride_ColorGradingLUT();
    void set_bOverride_ColorGradingLUT(bool value);
    bool get_bOverride_DepthOfFieldFocalDistance();
    void set_bOverride_DepthOfFieldFocalDistance(bool value);
    bool get_bOverride_DepthOfFieldFstop();
    void set_bOverride_DepthOfFieldFstop(bool value);
    bool get_bOverride_DepthOfFieldMinFstop();
    void set_bOverride_DepthOfFieldMinFstop(bool value);
    bool get_bOverride_DepthOfFieldBladeCount();
    void set_bOverride_DepthOfFieldBladeCount(bool value);
    bool get_bOverride_DepthOfFieldSensorWidth();
    void set_bOverride_DepthOfFieldSensorWidth(bool value);
    bool get_bOverride_DepthOfFieldDepthBlurRadius();
    void set_bOverride_DepthOfFieldDepthBlurRadius(bool value);
    bool get_bOverride_DepthOfFieldDepthBlurAmount();
    void set_bOverride_DepthOfFieldDepthBlurAmount(bool value);
    bool get_bOverride_DepthOfFieldFocalRegion();
    void set_bOverride_DepthOfFieldFocalRegion(bool value);
    bool get_bOverride_DepthOfFieldNearTransitionRegion();
    void set_bOverride_DepthOfFieldNearTransitionRegion(bool value);
    bool get_bOverride_DepthOfFieldFarTransitionRegion();
    void set_bOverride_DepthOfFieldFarTransitionRegion(bool value);
    bool get_bOverride_DepthOfFieldScale();
    void set_bOverride_DepthOfFieldScale(bool value);
    bool get_bOverride_DepthOfFieldNearBlurSize();
    void set_bOverride_DepthOfFieldNearBlurSize(bool value);
    bool get_bOverride_DepthOfFieldFarBlurSize();
    void set_bOverride_DepthOfFieldFarBlurSize(bool value);
    bool get_bOverride_MobileHQGaussian();
    void set_bOverride_MobileHQGaussian(bool value);
    bool get_bOverride_DepthOfFieldOcclusion();
    void set_bOverride_DepthOfFieldOcclusion(bool value);
    bool get_bOverride_DepthOfFieldSkyFocusDistance();
    void set_bOverride_DepthOfFieldSkyFocusDistance(bool value);
    bool get_bOverride_DepthOfFieldVignetteSize();
    void set_bOverride_DepthOfFieldVignetteSize(bool value);
    bool get_bOverride_MotionBlurAmount();
    void set_bOverride_MotionBlurAmount(bool value);
    bool get_bOverride_MotionBlurMax();
    void set_bOverride_MotionBlurMax(bool value);
    bool get_bOverride_MotionBlurTargetFPS();
    void set_bOverride_MotionBlurTargetFPS(bool value);
    bool get_bOverride_MotionBlurPerObjectSize();
    void set_bOverride_MotionBlurPerObjectSize(bool value);
    bool get_bOverride_ScreenPercentage();
    void set_bOverride_ScreenPercentage(bool value);
    bool get_bOverride_ScreenSpaceReflectionIntensity();
    void set_bOverride_ScreenSpaceReflectionIntensity(bool value);
    bool get_bOverride_ScreenSpaceReflectionQuality();
    void set_bOverride_ScreenSpaceReflectionQuality(bool value);
    bool get_bOverride_ScreenSpaceReflectionMaxRoughness();
    void set_bOverride_ScreenSpaceReflectionMaxRoughness(bool value);
    bool get_bOverride_ScreenSpaceReflectionRoughnessScale();
    void set_bOverride_ScreenSpaceReflectionRoughnessScale(bool value);
    bool get_bOverride_ReflectionsType();
    void set_bOverride_ReflectionsType(bool value);
    bool get_bOverride_RayTracingReflectionsMaxRoughness();
    void set_bOverride_RayTracingReflectionsMaxRoughness(bool value);
    bool get_bOverride_RayTracingReflectionsMaxBounces();
    void set_bOverride_RayTracingReflectionsMaxBounces(bool value);
    bool get_bOverride_RayTracingReflectionsSamplesPerPixel();
    void set_bOverride_RayTracingReflectionsSamplesPerPixel(bool value);
    bool get_bOverride_RayTracingReflectionsShadows();
    void set_bOverride_RayTracingReflectionsShadows(bool value);
    bool get_bOverride_RayTracingReflectionsTranslucency();
    void set_bOverride_RayTracingReflectionsTranslucency(bool value);
    bool get_bOverride_TranslucencyType();
    void set_bOverride_TranslucencyType(bool value);
    bool get_bOverride_RayTracingTranslucencyMaxRoughness();
    void set_bOverride_RayTracingTranslucencyMaxRoughness(bool value);
    bool get_bOverride_RayTracingTranslucencyRefractionRays();
    void set_bOverride_RayTracingTranslucencyRefractionRays(bool value);
    bool get_bOverride_RayTracingTranslucencySamplesPerPixel();
    void set_bOverride_RayTracingTranslucencySamplesPerPixel(bool value);
    bool get_bOverride_RayTracingTranslucencyShadows();
    void set_bOverride_RayTracingTranslucencyShadows(bool value);
    bool get_bOverride_RayTracingTranslucencyRefraction();
    void set_bOverride_RayTracingTranslucencyRefraction(bool value);
    bool get_bOverride_RayTracingGI();
    void set_bOverride_RayTracingGI(bool value);
    bool get_bOverride_RayTracingGIMaxBounces();
    void set_bOverride_RayTracingGIMaxBounces(bool value);
    bool get_bOverride_RayTracingGISamplesPerPixel();
    void set_bOverride_RayTracingGISamplesPerPixel(bool value);
    bool get_bOverride_PathTracingMaxBounces();
    void set_bOverride_PathTracingMaxBounces(bool value);
    bool get_bOverride_PathTracingSamplesPerPixel();
    void set_bOverride_PathTracingSamplesPerPixel(bool value);
    bool get_bOverride_PathTracingFilterWidth();
    void set_bOverride_PathTracingFilterWidth(bool value);
    bool get_bOverride_PathTracingEnableEmissive();
    void set_bOverride_PathTracingEnableEmissive(bool value);
    bool get_bOverride_PathTracingMaxPathExposure();
    void set_bOverride_PathTracingMaxPathExposure(bool value);
    bool get_bOverride_PathTracingEnableDenoiser();
    void set_bOverride_PathTracingEnableDenoiser(bool value);
    bool get_bMobileHQGaussian();
    void set_bMobileHQGaussian(bool value);
    void* get_BloomMethod();
    void* get_AutoExposureMethod();
    void* get_TemperatureType();
    float& get_WhiteTemp();
    float& get_WhiteTint();
    void* get_ColorSaturation();
    void* get_ColorContrast();
    void* get_ColorGamma();
    void* get_ColorGain();
    void* get_ColorOffset();
    void* get_ColorSaturationShadows();
    void* get_ColorContrastShadows();
    void* get_ColorGammaShadows();
    void* get_ColorGainShadows();
    void* get_ColorOffsetShadows();
    void* get_ColorSaturationMidtones();
    void* get_ColorContrastMidtones();
    void* get_ColorGammaMidtones();
    void* get_ColorGainMidtones();
    void* get_ColorOffsetMidtones();
    void* get_ColorSaturationHighlights();
    void* get_ColorContrastHighlights();
    void* get_ColorGammaHighlights();
    void* get_ColorGainHighlights();
    void* get_ColorOffsetHighlights();
    float& get_ColorCorrectionHighlightsMin();
    float& get_ColorCorrectionShadowsMax();
    float& get_BlueCorrection();
    float& get_ExpandGamut();
    float& get_ToneCurveAmount();
    float& get_FilmSlope();
    float& get_FilmToe();
    float& get_FilmShoulder();
    float& get_FilmBlackClip();
    float& get_FilmWhiteClip();
    void* get_FilmWhitePoint();
    void* get_FilmShadowTint();
    float& get_FilmShadowTintBlend();
    float& get_FilmShadowTintAmount();
    float& get_FilmSaturation();
    void* get_FilmChannelMixerRed();
    void* get_FilmChannelMixerGreen();
    void* get_FilmChannelMixerBlue();
    float& get_FilmContrast();
    float& get_FilmToeAmount();
    float& get_FilmHealAmount();
    float& get_FilmDynamicRange();
    void* get_SceneColorTint();
    float& get_SceneFringeIntensity();
    float& get_ChromaticAberrationStartOffset();
    float& get_BloomIntensity();
    float& get_BloomThreshold();
    float& get_BloomSizeScale();
    float& get_Bloom1Size();
    float& get_Bloom2Size();
    float& get_Bloom3Size();
    float& get_Bloom4Size();
    float& get_Bloom5Size();
    float& get_Bloom6Size();
    void* get_Bloom1Tint();
    void* get_Bloom2Tint();
    void* get_Bloom3Tint();
    void* get_Bloom4Tint();
    void* get_Bloom5Tint();
    void* get_Bloom6Tint();
    float& get_BloomConvolutionSize();
    _Script_Engine::Texture2D*& get_BloomConvolutionTexture();
    void* get_BloomConvolutionCenterUV();
    float& get_BloomConvolutionPreFilterMin();
    float& get_BloomConvolutionPreFilterMax();
    float& get_BloomConvolutionPreFilterMult();
    float& get_BloomConvolutionBufferScale();
    _Script_Engine::Texture*& get_BloomDirtMask();
    float& get_BloomDirtMaskIntensity();
    void* get_BloomDirtMaskTint();
    void* get_AmbientCubemapTint();
    float& get_AmbientCubemapIntensity();
    _Script_Engine::TextureCube*& get_AmbientCubemap();
    float& get_CameraShutterSpeed();
    float& get_CameraISO();
    float& get_DepthOfFieldFstop();
    float& get_DepthOfFieldMinFstop();
    int32_t& get_DepthOfFieldBladeCount();
    float& get_AutoExposureBias();
    float& get_AutoExposureBiasBackup();
    bool get_bOverride_AutoExposureBiasBackup();
    void set_bOverride_AutoExposureBiasBackup(bool value);
    bool get_AutoExposureApplyPhysicalCameraExposure();
    void set_AutoExposureApplyPhysicalCameraExposure(bool value);
    _Script_Engine::CurveFloat*& get_AutoExposureBiasCurve();
    _Script_Engine::Texture*& get_AutoExposureMeterMask();
    float& get_AutoExposureLowPercent();
    float& get_AutoExposureHighPercent();
    float& get_AutoExposureMinBrightness();
    float& get_AutoExposureMaxBrightness();
    float& get_AutoExposureSpeedUp();
    float& get_AutoExposureSpeedDown();
    float& get_HistogramLogMin();
    float& get_HistogramLogMax();
    float& get_AutoExposureCalibrationConstant();
    float& get_LensFlareIntensity();
    void* get_LensFlareTint();
    float& get_LensFlareBokehSize();
    float& get_LensFlareThreshold();
    _Script_Engine::Texture*& get_LensFlareBokehShape();
    void* get_LensFlareTints();
    float& get_VignetteIntensity();
    float& get_GrainJitter();
    float& get_GrainIntensity();
    float& get_AmbientOcclusionIntensity();
    float& get_AmbientOcclusionStaticFraction();
    float& get_AmbientOcclusionRadius();
    bool get_AmbientOcclusionRadiusInWS();
    void set_AmbientOcclusionRadiusInWS(bool value);
    float& get_AmbientOcclusionFadeDistance();
    float& get_AmbientOcclusionFadeRadius();
    float& get_AmbientOcclusionDistance();
    float& get_AmbientOcclusionPower();
    float& get_AmbientOcclusionBias();
    float& get_AmbientOcclusionQuality();
    float& get_AmbientOcclusionMipBlend();
    float& get_AmbientOcclusionMipScale();
    float& get_AmbientOcclusionMipThreshold();
    float& get_AmbientOcclusionTemporalBlendWeight();
    bool get_RayTracingAO();
    void set_RayTracingAO(bool value);
    int32_t& get_RayTracingAOSamplesPerPixel();
    float& get_RayTracingAOIntensity();
    float& get_RayTracingAORadius();
    void* get_IndirectLightingColor();
    float& get_IndirectLightingIntensity();
    void* get_RayTracingGIType();
    int32_t& get_RayTracingGIMaxBounces();
    int32_t& get_RayTracingGISamplesPerPixel();
    float& get_ColorGradingIntensity();
    _Script_Engine::Texture*& get_ColorGradingLUT();
    float& get_DepthOfFieldSensorWidth();
    float& get_DepthOfFieldFocalDistance();
    float& get_DepthOfFieldDepthBlurAmount();
    float& get_DepthOfFieldDepthBlurRadius();
    float& get_DepthOfFieldFocalRegion();
    float& get_DepthOfFieldNearTransitionRegion();
    float& get_DepthOfFieldFarTransitionRegion();
    float& get_DepthOfFieldScale();
    float& get_DepthOfFieldNearBlurSize();
    float& get_DepthOfFieldFarBlurSize();
    float& get_DepthOfFieldOcclusion();
    float& get_DepthOfFieldSkyFocusDistance();
    float& get_DepthOfFieldVignetteSize();
    float& get_MotionBlurAmount();
    float& get_MotionBlurMax();
    int32_t& get_MotionBlurTargetFPS();
    float& get_MotionBlurPerObjectSize();
    float& get_LPVIntensity();
    float& get_LPVVplInjectionBias();
    float& get_LPVSize();
    float& get_LPVSecondaryOcclusionIntensity();
    float& get_LPVSecondaryBounceIntensity();
    float& get_LPVGeometryVolumeBias();
    float& get_LPVEmissiveInjectionIntensity();
    float& get_LPVDirectionalOcclusionIntensity();
    float& get_LPVDirectionalOcclusionRadius();
    float& get_LPVDiffuseOcclusionExponent();
    float& get_LPVSpecularOcclusionExponent();
    float& get_LPVDiffuseOcclusionIntensity();
    float& get_LPVSpecularOcclusionIntensity();
    void* get_ReflectionsType();
    float& get_ScreenSpaceReflectionIntensity();
    float& get_ScreenSpaceReflectionQuality();
    float& get_ScreenSpaceReflectionMaxRoughness();
    float& get_RayTracingReflectionsMaxRoughness();
    int32_t& get_RayTracingReflectionsMaxBounces();
    int32_t& get_RayTracingReflectionsSamplesPerPixel();
    void* get_RayTracingReflectionsShadows();
    bool get_RayTracingReflectionsTranslucency();
    void set_RayTracingReflectionsTranslucency(bool value);
    void* get_TranslucencyType();
    float& get_RayTracingTranslucencyMaxRoughness();
    int32_t& get_RayTracingTranslucencyRefractionRays();
    int32_t& get_RayTracingTranslucencySamplesPerPixel();
    void* get_RayTracingTranslucencyShadows();
    bool get_RayTracingTranslucencyRefraction();
    void set_RayTracingTranslucencyRefraction(bool value);
    int32_t& get_PathTracingMaxBounces();
    int32_t& get_PathTracingSamplesPerPixel();
    float& get_PathTracingFilterWidth();
    bool get_PathTracingEnableEmissive();
    void set_PathTracingEnableEmissive(bool value);
    float& get_PathTracingMaxPathExposure();
    bool get_PathTracingEnableDenoiser();
    void set_PathTracingEnableDenoiser(bool value);
    float& get_LPVFadeRange();
    float& get_LPVDirectionalOcclusionFadeRange();
    float& get_ScreenPercentage();
    void* get_WeightedBlendables();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x560
#pragma pack(pop)
}
