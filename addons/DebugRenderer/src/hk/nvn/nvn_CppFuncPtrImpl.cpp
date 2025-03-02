#pragma once

#include <nvn/nvn_CppFuncPtrBase.h>

namespace nvn {

    DeviceBuilderSetDefaultsFunc pfncpp_nvnDeviceBuilderSetDefaults;
    DeviceBuilderSetFlagsFunc pfncpp_nvnDeviceBuilderSetFlags;
    DeviceBuilderGetFlagsFunc pfncpp_nvnDeviceBuilderGetFlags;
    DeviceInitializeFunc pfncpp_nvnDeviceInitialize;
    DeviceFinalizeFunc pfncpp_nvnDeviceFinalize;
    DeviceSetDebugLabelFunc pfncpp_nvnDeviceSetDebugLabel;
    DeviceGetProcAddressFunc pfncpp_nvnDeviceGetProcAddress;
    DeviceGetIntegerFunc pfncpp_nvnDeviceGetInteger;
    DeviceGetCurrentTimestampInNanosecondsFunc pfncpp_nvnDeviceGetCurrentTimestampInNanoseconds;
    DeviceSetIntermediateShaderCacheFunc pfncpp_nvnDeviceSetIntermediateShaderCache;
    DeviceGetTextureHandleFunc pfncpp_nvnDeviceGetTextureHandle;
    DeviceGetTexelFetchHandleFunc pfncpp_nvnDeviceGetTexelFetchHandle;
    DeviceGetImageHandleFunc pfncpp_nvnDeviceGetImageHandle;
    DeviceInstallDebugCallbackFunc pfncpp_nvnDeviceInstallDebugCallback;
    DeviceGenerateDebugDomainIdFunc pfncpp_nvnDeviceGenerateDebugDomainId;
    DeviceSetWindowOriginModeFunc pfncpp_nvnDeviceSetWindowOriginMode;
    DeviceSetDepthModeFunc pfncpp_nvnDeviceSetDepthMode;
    DeviceRegisterFastClearColorFunc pfncpp_nvnDeviceRegisterFastClearColor;
    DeviceRegisterFastClearColoriFunc pfncpp_nvnDeviceRegisterFastClearColori;
    DeviceRegisterFastClearColoruiFunc pfncpp_nvnDeviceRegisterFastClearColorui;
    DeviceRegisterFastClearDepthFunc pfncpp_nvnDeviceRegisterFastClearDepth;
    DeviceGetWindowOriginModeFunc pfncpp_nvnDeviceGetWindowOriginMode;
    DeviceGetDepthModeFunc pfncpp_nvnDeviceGetDepthMode;
    DeviceGetTimestampInNanosecondsFunc pfncpp_nvnDeviceGetTimestampInNanoseconds;
    DeviceApplyDeferredFinalizesFunc pfncpp_nvnDeviceApplyDeferredFinalizes;
    DeviceFinalizeCommandHandleFunc pfncpp_nvnDeviceFinalizeCommandHandle;
    DeviceWalkDebugDatabaseFunc pfncpp_nvnDeviceWalkDebugDatabase;
    DeviceGetSeparateTextureHandleFunc pfncpp_nvnDeviceGetSeparateTextureHandle;
    DeviceGetSeparateSamplerHandleFunc pfncpp_nvnDeviceGetSeparateSamplerHandle;
    DeviceIsExternalDebuggerAttachedFunc pfncpp_nvnDeviceIsExternalDebuggerAttached;
    QueueGetErrorFunc pfncpp_nvnQueueGetError;
    QueueGetTotalCommandMemoryUsedFunc pfncpp_nvnQueueGetTotalCommandMemoryUsed;
    QueueGetTotalControlMemoryUsedFunc pfncpp_nvnQueueGetTotalControlMemoryUsed;
    QueueGetTotalComputeMemoryUsedFunc pfncpp_nvnQueueGetTotalComputeMemoryUsed;
    QueueResetMemoryUsageCountsFunc pfncpp_nvnQueueResetMemoryUsageCounts;
    QueueBuilderSetDeviceFunc pfncpp_nvnQueueBuilderSetDevice;
    QueueBuilderSetDefaultsFunc pfncpp_nvnQueueBuilderSetDefaults;
    QueueBuilderSetFlagsFunc pfncpp_nvnQueueBuilderSetFlags;
    QueueBuilderSetCommandMemorySizeFunc pfncpp_nvnQueueBuilderSetCommandMemorySize;
    QueueBuilderSetComputeMemorySizeFunc pfncpp_nvnQueueBuilderSetComputeMemorySize;
    QueueBuilderSetControlMemorySizeFunc pfncpp_nvnQueueBuilderSetControlMemorySize;
    QueueBuilderGetQueueMemorySizeFunc pfncpp_nvnQueueBuilderGetQueueMemorySize;
    QueueBuilderSetQueueMemoryFunc pfncpp_nvnQueueBuilderSetQueueMemory;
    QueueBuilderSetCommandFlushThresholdFunc pfncpp_nvnQueueBuilderSetCommandFlushThreshold;
    QueueBuilderGetDeviceFunc pfncpp_nvnQueueBuilderGetDevice;
    QueueBuilderGetFlagsFunc pfncpp_nvnQueueBuilderGetFlags;
    QueueBuilderGetCommandMemorySizeFunc pfncpp_nvnQueueBuilderGetCommandMemorySize;
    QueueBuilderGetComputeMemorySizeFunc pfncpp_nvnQueueBuilderGetComputeMemorySize;
    QueueBuilderGetControlMemorySizeFunc pfncpp_nvnQueueBuilderGetControlMemorySize;
    QueueBuilderGetCommandFlushThresholdFunc pfncpp_nvnQueueBuilderGetCommandFlushThreshold;
    QueueBuilderGetMemorySizeFunc pfncpp_nvnQueueBuilderGetMemorySize;
    QueueBuilderGetMemoryFunc pfncpp_nvnQueueBuilderGetMemory;
    QueueInitializeFunc pfncpp_nvnQueueInitialize;
    QueueFinalizeFunc pfncpp_nvnQueueFinalize;
    QueueSetDebugLabelFunc pfncpp_nvnQueueSetDebugLabel;
    QueueSubmitCommandsFunc pfncpp_nvnQueueSubmitCommands;
    QueueFlushFunc pfncpp_nvnQueueFlush;
    QueueFinishFunc pfncpp_nvnQueueFinish;
    QueuePresentTextureFunc pfncpp_nvnQueuePresentTexture;
    QueueAcquireTextureFunc pfncpp_nvnQueueAcquireTexture;
    WindowBuilderSetDeviceFunc pfncpp_nvnWindowBuilderSetDevice;
    WindowBuilderSetDefaultsFunc pfncpp_nvnWindowBuilderSetDefaults;
    WindowBuilderSetNativeWindowFunc pfncpp_nvnWindowBuilderSetNativeWindow;
    WindowBuilderSetTexturesFunc pfncpp_nvnWindowBuilderSetTextures;
    WindowBuilderSetPresentIntervalFunc pfncpp_nvnWindowBuilderSetPresentInterval;
    WindowBuilderGetDeviceFunc pfncpp_nvnWindowBuilderGetDevice;
    WindowBuilderGetNumTexturesFunc pfncpp_nvnWindowBuilderGetNumTextures;
    WindowBuilderGetTextureFunc pfncpp_nvnWindowBuilderGetTexture;
    WindowBuilderGetNativeWindowFunc pfncpp_nvnWindowBuilderGetNativeWindow;
    WindowBuilderGetPresentIntervalFunc pfncpp_nvnWindowBuilderGetPresentInterval;
    WindowInitializeFunc pfncpp_nvnWindowInitialize;
    WindowFinalizeFunc pfncpp_nvnWindowFinalize;
    WindowSetDebugLabelFunc pfncpp_nvnWindowSetDebugLabel;
    WindowAcquireTextureFunc pfncpp_nvnWindowAcquireTexture;
    WindowGetNativeWindowFunc pfncpp_nvnWindowGetNativeWindow;
    WindowGetPresentIntervalFunc pfncpp_nvnWindowGetPresentInterval;
    WindowSetPresentIntervalFunc pfncpp_nvnWindowSetPresentInterval;
    WindowSetCropFunc pfncpp_nvnWindowSetCrop;
    WindowGetCropFunc pfncpp_nvnWindowGetCrop;
    ProgramInitializeFunc pfncpp_nvnProgramInitialize;
    ProgramFinalizeFunc pfncpp_nvnProgramFinalize;
    ProgramSetDebugLabelFunc pfncpp_nvnProgramSetDebugLabel;
    ProgramSetShadersFunc pfncpp_nvnProgramSetShaders;
    MemoryPoolBuilderSetDeviceFunc pfncpp_nvnMemoryPoolBuilderSetDevice;
    MemoryPoolBuilderSetDefaultsFunc pfncpp_nvnMemoryPoolBuilderSetDefaults;
    MemoryPoolBuilderSetStorageFunc pfncpp_nvnMemoryPoolBuilderSetStorage;
    MemoryPoolBuilderSetFlagsFunc pfncpp_nvnMemoryPoolBuilderSetFlags;
    MemoryPoolBuilderGetDeviceFunc pfncpp_nvnMemoryPoolBuilderGetDevice;
    MemoryPoolBuilderGetMemoryFunc pfncpp_nvnMemoryPoolBuilderGetMemory;
    MemoryPoolBuilderGetSizeFunc pfncpp_nvnMemoryPoolBuilderGetSize;
    MemoryPoolBuilderGetFlagsFunc pfncpp_nvnMemoryPoolBuilderGetFlags;
    MemoryPoolInitializeFunc pfncpp_nvnMemoryPoolInitialize;
    MemoryPoolSetDebugLabelFunc pfncpp_nvnMemoryPoolSetDebugLabel;
    MemoryPoolFinalizeFunc pfncpp_nvnMemoryPoolFinalize;
    MemoryPoolMapFunc pfncpp_nvnMemoryPoolMap;
    MemoryPoolFlushMappedRangeFunc pfncpp_nvnMemoryPoolFlushMappedRange;
    MemoryPoolInvalidateMappedRangeFunc pfncpp_nvnMemoryPoolInvalidateMappedRange;
    MemoryPoolGetBufferAddressFunc pfncpp_nvnMemoryPoolGetBufferAddress;
    MemoryPoolMapVirtualFunc pfncpp_nvnMemoryPoolMapVirtual;
    MemoryPoolGetSizeFunc pfncpp_nvnMemoryPoolGetSize;
    MemoryPoolGetFlagsFunc pfncpp_nvnMemoryPoolGetFlags;
    TexturePoolInitializeFunc pfncpp_nvnTexturePoolInitialize;
    TexturePoolSetDebugLabelFunc pfncpp_nvnTexturePoolSetDebugLabel;
    TexturePoolFinalizeFunc pfncpp_nvnTexturePoolFinalize;
    TexturePoolRegisterTextureFunc pfncpp_nvnTexturePoolRegisterTexture;
    TexturePoolRegisterImageFunc pfncpp_nvnTexturePoolRegisterImage;
    TexturePoolGetMemoryPoolFunc pfncpp_nvnTexturePoolGetMemoryPool;
    TexturePoolGetMemoryOffsetFunc pfncpp_nvnTexturePoolGetMemoryOffset;
    TexturePoolGetSizeFunc pfncpp_nvnTexturePoolGetSize;
    SamplerPoolInitializeFunc pfncpp_nvnSamplerPoolInitialize;
    SamplerPoolSetDebugLabelFunc pfncpp_nvnSamplerPoolSetDebugLabel;
    SamplerPoolFinalizeFunc pfncpp_nvnSamplerPoolFinalize;
    SamplerPoolRegisterSamplerFunc pfncpp_nvnSamplerPoolRegisterSampler;
    SamplerPoolRegisterSamplerBuilderFunc pfncpp_nvnSamplerPoolRegisterSamplerBuilder;
    SamplerPoolGetMemoryPoolFunc pfncpp_nvnSamplerPoolGetMemoryPool;
    SamplerPoolGetMemoryOffsetFunc pfncpp_nvnSamplerPoolGetMemoryOffset;
    SamplerPoolGetSizeFunc pfncpp_nvnSamplerPoolGetSize;
    BufferBuilderSetDeviceFunc pfncpp_nvnBufferBuilderSetDevice;
    BufferBuilderSetDefaultsFunc pfncpp_nvnBufferBuilderSetDefaults;
    BufferBuilderSetStorageFunc pfncpp_nvnBufferBuilderSetStorage;
    BufferBuilderGetDeviceFunc pfncpp_nvnBufferBuilderGetDevice;
    BufferBuilderGetMemoryPoolFunc pfncpp_nvnBufferBuilderGetMemoryPool;
    BufferBuilderGetMemoryOffsetFunc pfncpp_nvnBufferBuilderGetMemoryOffset;
    BufferBuilderGetSizeFunc pfncpp_nvnBufferBuilderGetSize;
    BufferInitializeFunc pfncpp_nvnBufferInitialize;
    BufferSetDebugLabelFunc pfncpp_nvnBufferSetDebugLabel;
    BufferFinalizeFunc pfncpp_nvnBufferFinalize;
    BufferMapFunc pfncpp_nvnBufferMap;
    BufferGetAddressFunc pfncpp_nvnBufferGetAddress;
    BufferFlushMappedRangeFunc pfncpp_nvnBufferFlushMappedRange;
    BufferInvalidateMappedRangeFunc pfncpp_nvnBufferInvalidateMappedRange;
    BufferGetMemoryPoolFunc pfncpp_nvnBufferGetMemoryPool;
    BufferGetMemoryOffsetFunc pfncpp_nvnBufferGetMemoryOffset;
    BufferGetSizeFunc pfncpp_nvnBufferGetSize;
    BufferGetDebugIDFunc pfncpp_nvnBufferGetDebugID;
    TextureBuilderSetDeviceFunc pfncpp_nvnTextureBuilderSetDevice;
    TextureBuilderSetDefaultsFunc pfncpp_nvnTextureBuilderSetDefaults;
    TextureBuilderSetFlagsFunc pfncpp_nvnTextureBuilderSetFlags;
    TextureBuilderSetTargetFunc pfncpp_nvnTextureBuilderSetTarget;
    TextureBuilderSetWidthFunc pfncpp_nvnTextureBuilderSetWidth;
    TextureBuilderSetHeightFunc pfncpp_nvnTextureBuilderSetHeight;
    TextureBuilderSetDepthFunc pfncpp_nvnTextureBuilderSetDepth;
    TextureBuilderSetSize1DFunc pfncpp_nvnTextureBuilderSetSize1D;
    TextureBuilderSetSize2DFunc pfncpp_nvnTextureBuilderSetSize2D;
    TextureBuilderSetSize3DFunc pfncpp_nvnTextureBuilderSetSize3D;
    TextureBuilderSetLevelsFunc pfncpp_nvnTextureBuilderSetLevels;
    TextureBuilderSetFormatFunc pfncpp_nvnTextureBuilderSetFormat;
    TextureBuilderSetSamplesFunc pfncpp_nvnTextureBuilderSetSamples;
    TextureBuilderSetSwizzleFunc pfncpp_nvnTextureBuilderSetSwizzle;
    TextureBuilderSetDepthStencilModeFunc pfncpp_nvnTextureBuilderSetDepthStencilMode;
    TextureBuilderGetStorageSizeFunc pfncpp_nvnTextureBuilderGetStorageSize;
    TextureBuilderGetStorageAlignmentFunc pfncpp_nvnTextureBuilderGetStorageAlignment;
    TextureBuilderSetStorageFunc pfncpp_nvnTextureBuilderSetStorage;
    TextureBuilderSetPackagedTextureDataFunc pfncpp_nvnTextureBuilderSetPackagedTextureData;
    TextureBuilderSetPackagedTextureLayoutFunc pfncpp_nvnTextureBuilderSetPackagedTextureLayout;
    TextureBuilderSetStrideFunc pfncpp_nvnTextureBuilderSetStride;
    TextureBuilderSetGLTextureNameFunc pfncpp_nvnTextureBuilderSetGLTextureName;
    TextureBuilderGetStorageClassFunc pfncpp_nvnTextureBuilderGetStorageClass;
    TextureBuilderGetDeviceFunc pfncpp_nvnTextureBuilderGetDevice;
    TextureBuilderGetFlagsFunc pfncpp_nvnTextureBuilderGetFlags;
    TextureBuilderGetTargetFunc pfncpp_nvnTextureBuilderGetTarget;
    TextureBuilderGetWidthFunc pfncpp_nvnTextureBuilderGetWidth;
    TextureBuilderGetHeightFunc pfncpp_nvnTextureBuilderGetHeight;
    TextureBuilderGetDepthFunc pfncpp_nvnTextureBuilderGetDepth;
    TextureBuilderGetLevelsFunc pfncpp_nvnTextureBuilderGetLevels;
    TextureBuilderGetFormatFunc pfncpp_nvnTextureBuilderGetFormat;
    TextureBuilderGetSamplesFunc pfncpp_nvnTextureBuilderGetSamples;
    TextureBuilderGetSwizzleFunc pfncpp_nvnTextureBuilderGetSwizzle;
    TextureBuilderGetDepthStencilModeFunc pfncpp_nvnTextureBuilderGetDepthStencilMode;
    TextureBuilderGetPackagedTextureDataFunc pfncpp_nvnTextureBuilderGetPackagedTextureData;
    TextureBuilderGetPackagedTextureLayoutFunc pfncpp_nvnTextureBuilderGetPackagedTextureLayout;
    TextureBuilderGetStrideFunc pfncpp_nvnTextureBuilderGetStride;
    TextureBuilderGetSparseTileLayoutFunc pfncpp_nvnTextureBuilderGetSparseTileLayout;
    TextureBuilderGetGLTextureNameFunc pfncpp_nvnTextureBuilderGetGLTextureName;
    TextureBuilderGetZCullStorageSizeFunc pfncpp_nvnTextureBuilderGetZCullStorageSize;
    TextureBuilderGetMemoryPoolFunc pfncpp_nvnTextureBuilderGetMemoryPool;
    TextureBuilderGetMemoryOffsetFunc pfncpp_nvnTextureBuilderGetMemoryOffset;
    TextureViewSetDefaultsFunc pfncpp_nvnTextureViewSetDefaults;
    TextureViewSetLevelsFunc pfncpp_nvnTextureViewSetLevels;
    TextureViewSetLayersFunc pfncpp_nvnTextureViewSetLayers;
    TextureViewSetFormatFunc pfncpp_nvnTextureViewSetFormat;
    TextureViewSetSwizzleFunc pfncpp_nvnTextureViewSetSwizzle;
    TextureViewSetDepthStencilModeFunc pfncpp_nvnTextureViewSetDepthStencilMode;
    TextureViewSetTargetFunc pfncpp_nvnTextureViewSetTarget;
    TextureViewGetLevelsFunc pfncpp_nvnTextureViewGetLevels;
    TextureViewGetLayersFunc pfncpp_nvnTextureViewGetLayers;
    TextureViewGetFormatFunc pfncpp_nvnTextureViewGetFormat;
    TextureViewGetSwizzleFunc pfncpp_nvnTextureViewGetSwizzle;
    TextureViewGetDepthStencilModeFunc pfncpp_nvnTextureViewGetDepthStencilMode;
    TextureViewGetTargetFunc pfncpp_nvnTextureViewGetTarget;
    TextureViewCompareFunc pfncpp_nvnTextureViewCompare;
    TextureInitializeFunc pfncpp_nvnTextureInitialize;
    TextureGetZCullStorageSizeFunc pfncpp_nvnTextureGetZCullStorageSize;
    TextureFinalizeFunc pfncpp_nvnTextureFinalize;
    TextureSetDebugLabelFunc pfncpp_nvnTextureSetDebugLabel;
    TextureGetStorageClassFunc pfncpp_nvnTextureGetStorageClass;
    TextureGetViewOffsetFunc pfncpp_nvnTextureGetViewOffset;
    TextureGetFlagsFunc pfncpp_nvnTextureGetFlags;
    TextureGetTargetFunc pfncpp_nvnTextureGetTarget;
    TextureGetWidthFunc pfncpp_nvnTextureGetWidth;
    TextureGetHeightFunc pfncpp_nvnTextureGetHeight;
    TextureGetDepthFunc pfncpp_nvnTextureGetDepth;
    TextureGetLevelsFunc pfncpp_nvnTextureGetLevels;
    TextureGetFormatFunc pfncpp_nvnTextureGetFormat;
    TextureGetSamplesFunc pfncpp_nvnTextureGetSamples;
    TextureGetSwizzleFunc pfncpp_nvnTextureGetSwizzle;
    TextureGetDepthStencilModeFunc pfncpp_nvnTextureGetDepthStencilMode;
    TextureGetStrideFunc pfncpp_nvnTextureGetStride;
    TextureGetTextureAddressFunc pfncpp_nvnTextureGetTextureAddress;
    TextureGetSparseTileLayoutFunc pfncpp_nvnTextureGetSparseTileLayout;
    TextureWriteTexelsFunc pfncpp_nvnTextureWriteTexels;
    TextureWriteTexelsStridedFunc pfncpp_nvnTextureWriteTexelsStrided;
    TextureReadTexelsFunc pfncpp_nvnTextureReadTexels;
    TextureReadTexelsStridedFunc pfncpp_nvnTextureReadTexelsStrided;
    TextureFlushTexelsFunc pfncpp_nvnTextureFlushTexels;
    TextureInvalidateTexelsFunc pfncpp_nvnTextureInvalidateTexels;
    TextureGetMemoryPoolFunc pfncpp_nvnTextureGetMemoryPool;
    TextureGetMemoryOffsetFunc pfncpp_nvnTextureGetMemoryOffset;
    TextureGetStorageSizeFunc pfncpp_nvnTextureGetStorageSize;
    TextureCompareFunc pfncpp_nvnTextureCompare;
    TextureGetDebugIDFunc pfncpp_nvnTextureGetDebugID;
    SamplerBuilderSetDeviceFunc pfncpp_nvnSamplerBuilderSetDevice;
    SamplerBuilderSetDefaultsFunc pfncpp_nvnSamplerBuilderSetDefaults;
    SamplerBuilderSetMinMagFilterFunc pfncpp_nvnSamplerBuilderSetMinMagFilter;
    SamplerBuilderSetWrapModeFunc pfncpp_nvnSamplerBuilderSetWrapMode;
    SamplerBuilderSetLodClampFunc pfncpp_nvnSamplerBuilderSetLodClamp;
    SamplerBuilderSetLodBiasFunc pfncpp_nvnSamplerBuilderSetLodBias;
    SamplerBuilderSetCompareFunc pfncpp_nvnSamplerBuilderSetCompare;
    SamplerBuilderSetBorderColorFunc pfncpp_nvnSamplerBuilderSetBorderColor;
    SamplerBuilderSetBorderColoriFunc pfncpp_nvnSamplerBuilderSetBorderColori;
    SamplerBuilderSetBorderColoruiFunc pfncpp_nvnSamplerBuilderSetBorderColorui;
    SamplerBuilderSetMaxAnisotropyFunc pfncpp_nvnSamplerBuilderSetMaxAnisotropy;
    SamplerBuilderSetReductionFilterFunc pfncpp_nvnSamplerBuilderSetReductionFilter;
    SamplerBuilderSetLodSnapFunc pfncpp_nvnSamplerBuilderSetLodSnap;
    SamplerBuilderGetDeviceFunc pfncpp_nvnSamplerBuilderGetDevice;
    SamplerBuilderGetMinMagFilterFunc pfncpp_nvnSamplerBuilderGetMinMagFilter;
    SamplerBuilderGetWrapModeFunc pfncpp_nvnSamplerBuilderGetWrapMode;
    SamplerBuilderGetLodClampFunc pfncpp_nvnSamplerBuilderGetLodClamp;
    SamplerBuilderGetLodBiasFunc pfncpp_nvnSamplerBuilderGetLodBias;
    SamplerBuilderGetCompareFunc pfncpp_nvnSamplerBuilderGetCompare;
    SamplerBuilderGetBorderColorFunc pfncpp_nvnSamplerBuilderGetBorderColor;
    SamplerBuilderGetBorderColoriFunc pfncpp_nvnSamplerBuilderGetBorderColori;
    SamplerBuilderGetBorderColoruiFunc pfncpp_nvnSamplerBuilderGetBorderColorui;
    SamplerBuilderGetMaxAnisotropyFunc pfncpp_nvnSamplerBuilderGetMaxAnisotropy;
    SamplerBuilderGetReductionFilterFunc pfncpp_nvnSamplerBuilderGetReductionFilter;
    SamplerBuilderGetLodSnapFunc pfncpp_nvnSamplerBuilderGetLodSnap;
    SamplerInitializeFunc pfncpp_nvnSamplerInitialize;
    SamplerFinalizeFunc pfncpp_nvnSamplerFinalize;
    SamplerSetDebugLabelFunc pfncpp_nvnSamplerSetDebugLabel;
    SamplerGetMinMagFilterFunc pfncpp_nvnSamplerGetMinMagFilter;
    SamplerGetWrapModeFunc pfncpp_nvnSamplerGetWrapMode;
    SamplerGetLodClampFunc pfncpp_nvnSamplerGetLodClamp;
    SamplerGetLodBiasFunc pfncpp_nvnSamplerGetLodBias;
    SamplerGetCompareFunc pfncpp_nvnSamplerGetCompare;
    SamplerGetBorderColorFunc pfncpp_nvnSamplerGetBorderColor;
    SamplerGetBorderColoriFunc pfncpp_nvnSamplerGetBorderColori;
    SamplerGetBorderColoruiFunc pfncpp_nvnSamplerGetBorderColorui;
    SamplerGetMaxAnisotropyFunc pfncpp_nvnSamplerGetMaxAnisotropy;
    SamplerGetReductionFilterFunc pfncpp_nvnSamplerGetReductionFilter;
    SamplerCompareFunc pfncpp_nvnSamplerCompare;
    SamplerGetDebugIDFunc pfncpp_nvnSamplerGetDebugID;
    BlendStateSetDefaultsFunc pfncpp_nvnBlendStateSetDefaults;
    BlendStateSetBlendTargetFunc pfncpp_nvnBlendStateSetBlendTarget;
    BlendStateSetBlendFuncFunc pfncpp_nvnBlendStateSetBlendFunc;
    BlendStateSetBlendEquationFunc pfncpp_nvnBlendStateSetBlendEquation;
    BlendStateSetAdvancedModeFunc pfncpp_nvnBlendStateSetAdvancedMode;
    BlendStateSetAdvancedOverlapFunc pfncpp_nvnBlendStateSetAdvancedOverlap;
    BlendStateSetAdvancedPremultipliedSrcFunc pfncpp_nvnBlendStateSetAdvancedPremultipliedSrc;
    BlendStateSetAdvancedNormalizedDstFunc pfncpp_nvnBlendStateSetAdvancedNormalizedDst;
    BlendStateGetBlendTargetFunc pfncpp_nvnBlendStateGetBlendTarget;
    BlendStateGetBlendFuncFunc pfncpp_nvnBlendStateGetBlendFunc;
    BlendStateGetBlendEquationFunc pfncpp_nvnBlendStateGetBlendEquation;
    BlendStateGetAdvancedModeFunc pfncpp_nvnBlendStateGetAdvancedMode;
    BlendStateGetAdvancedOverlapFunc pfncpp_nvnBlendStateGetAdvancedOverlap;
    BlendStateGetAdvancedPremultipliedSrcFunc pfncpp_nvnBlendStateGetAdvancedPremultipliedSrc;
    BlendStateGetAdvancedNormalizedDstFunc pfncpp_nvnBlendStateGetAdvancedNormalizedDst;
    ColorStateSetDefaultsFunc pfncpp_nvnColorStateSetDefaults;
    ColorStateSetBlendEnableFunc pfncpp_nvnColorStateSetBlendEnable;
    ColorStateSetLogicOpFunc pfncpp_nvnColorStateSetLogicOp;
    ColorStateSetAlphaTestFunc pfncpp_nvnColorStateSetAlphaTest;
    ColorStateGetBlendEnableFunc pfncpp_nvnColorStateGetBlendEnable;
    ColorStateGetLogicOpFunc pfncpp_nvnColorStateGetLogicOp;
    ColorStateGetAlphaTestFunc pfncpp_nvnColorStateGetAlphaTest;
    ChannelMaskStateSetDefaultsFunc pfncpp_nvnChannelMaskStateSetDefaults;
    ChannelMaskStateSetChannelMaskFunc pfncpp_nvnChannelMaskStateSetChannelMask;
    ChannelMaskStateGetChannelMaskFunc pfncpp_nvnChannelMaskStateGetChannelMask;
    MultisampleStateSetDefaultsFunc pfncpp_nvnMultisampleStateSetDefaults;
    MultisampleStateSetMultisampleEnableFunc pfncpp_nvnMultisampleStateSetMultisampleEnable;
    MultisampleStateSetSamplesFunc pfncpp_nvnMultisampleStateSetSamples;
    MultisampleStateSetAlphaToCoverageEnableFunc pfncpp_nvnMultisampleStateSetAlphaToCoverageEnable;
    MultisampleStateSetAlphaToCoverageDitherFunc pfncpp_nvnMultisampleStateSetAlphaToCoverageDither;
    MultisampleStateGetMultisampleEnableFunc pfncpp_nvnMultisampleStateGetMultisampleEnable;
    MultisampleStateGetSamplesFunc pfncpp_nvnMultisampleStateGetSamples;
    MultisampleStateGetAlphaToCoverageEnableFunc pfncpp_nvnMultisampleStateGetAlphaToCoverageEnable;
    MultisampleStateGetAlphaToCoverageDitherFunc pfncpp_nvnMultisampleStateGetAlphaToCoverageDither;
    MultisampleStateSetRasterSamplesFunc pfncpp_nvnMultisampleStateSetRasterSamples;
    MultisampleStateGetRasterSamplesFunc pfncpp_nvnMultisampleStateGetRasterSamples;
    MultisampleStateSetCoverageModulationModeFunc pfncpp_nvnMultisampleStateSetCoverageModulationMode;
    MultisampleStateGetCoverageModulationModeFunc pfncpp_nvnMultisampleStateGetCoverageModulationMode;
    MultisampleStateSetCoverageToColorEnableFunc pfncpp_nvnMultisampleStateSetCoverageToColorEnable;
    MultisampleStateGetCoverageToColorEnableFunc pfncpp_nvnMultisampleStateGetCoverageToColorEnable;
    MultisampleStateSetCoverageToColorOutputFunc pfncpp_nvnMultisampleStateSetCoverageToColorOutput;
    MultisampleStateGetCoverageToColorOutputFunc pfncpp_nvnMultisampleStateGetCoverageToColorOutput;
    MultisampleStateSetSampleLocationsEnableFunc pfncpp_nvnMultisampleStateSetSampleLocationsEnable;
    MultisampleStateGetSampleLocationsEnableFunc pfncpp_nvnMultisampleStateGetSampleLocationsEnable;
    MultisampleStateGetSampleLocationsGridFunc pfncpp_nvnMultisampleStateGetSampleLocationsGrid;
    MultisampleStateSetSampleLocationsGridEnableFunc
        pfncpp_nvnMultisampleStateSetSampleLocationsGridEnable;
    MultisampleStateGetSampleLocationsGridEnableFunc
        pfncpp_nvnMultisampleStateGetSampleLocationsGridEnable;
    MultisampleStateSetSampleLocationsFunc pfncpp_nvnMultisampleStateSetSampleLocations;
    PolygonStateSetDefaultsFunc pfncpp_nvnPolygonStateSetDefaults;
    PolygonStateSetCullFaceFunc pfncpp_nvnPolygonStateSetCullFace;
    PolygonStateSetFrontFaceFunc pfncpp_nvnPolygonStateSetFrontFace;
    PolygonStateSetPolygonModeFunc pfncpp_nvnPolygonStateSetPolygonMode;
    PolygonStateSetPolygonOffsetEnablesFunc pfncpp_nvnPolygonStateSetPolygonOffsetEnables;
    PolygonStateGetCullFaceFunc pfncpp_nvnPolygonStateGetCullFace;
    PolygonStateGetFrontFaceFunc pfncpp_nvnPolygonStateGetFrontFace;
    PolygonStateGetPolygonModeFunc pfncpp_nvnPolygonStateGetPolygonMode;
    PolygonStateGetPolygonOffsetEnablesFunc pfncpp_nvnPolygonStateGetPolygonOffsetEnables;
    DepthStencilStateSetDefaultsFunc pfncpp_nvnDepthStencilStateSetDefaults;
    DepthStencilStateSetDepthTestEnableFunc pfncpp_nvnDepthStencilStateSetDepthTestEnable;
    DepthStencilStateSetDepthWriteEnableFunc pfncpp_nvnDepthStencilStateSetDepthWriteEnable;
    DepthStencilStateSetDepthFuncFunc pfncpp_nvnDepthStencilStateSetDepthFunc;
    DepthStencilStateSetStencilTestEnableFunc pfncpp_nvnDepthStencilStateSetStencilTestEnable;
    DepthStencilStateSetStencilFuncFunc pfncpp_nvnDepthStencilStateSetStencilFunc;
    DepthStencilStateSetStencilOpFunc pfncpp_nvnDepthStencilStateSetStencilOp;
    DepthStencilStateGetDepthTestEnableFunc pfncpp_nvnDepthStencilStateGetDepthTestEnable;
    DepthStencilStateGetDepthWriteEnableFunc pfncpp_nvnDepthStencilStateGetDepthWriteEnable;
    DepthStencilStateGetDepthFuncFunc pfncpp_nvnDepthStencilStateGetDepthFunc;
    DepthStencilStateGetStencilTestEnableFunc pfncpp_nvnDepthStencilStateGetStencilTestEnable;
    DepthStencilStateGetStencilFuncFunc pfncpp_nvnDepthStencilStateGetStencilFunc;
    DepthStencilStateGetStencilOpFunc pfncpp_nvnDepthStencilStateGetStencilOp;
    VertexAttribStateSetDefaultsFunc pfncpp_nvnVertexAttribStateSetDefaults;
    VertexAttribStateSetFormatFunc pfncpp_nvnVertexAttribStateSetFormat;
    VertexAttribStateSetStreamIndexFunc pfncpp_nvnVertexAttribStateSetStreamIndex;
    VertexAttribStateGetFormatFunc pfncpp_nvnVertexAttribStateGetFormat;
    VertexAttribStateGetStreamIndexFunc pfncpp_nvnVertexAttribStateGetStreamIndex;
    VertexStreamStateSetDefaultsFunc pfncpp_nvnVertexStreamStateSetDefaults;
    VertexStreamStateSetStrideFunc pfncpp_nvnVertexStreamStateSetStride;
    VertexStreamStateSetDivisorFunc pfncpp_nvnVertexStreamStateSetDivisor;
    VertexStreamStateGetStrideFunc pfncpp_nvnVertexStreamStateGetStride;
    VertexStreamStateGetDivisorFunc pfncpp_nvnVertexStreamStateGetDivisor;
    CommandBufferInitializeFunc pfncpp_nvnCommandBufferInitialize;
    CommandBufferFinalizeFunc pfncpp_nvnCommandBufferFinalize;
    CommandBufferSetDebugLabelFunc pfncpp_nvnCommandBufferSetDebugLabel;
    CommandBufferSetMemoryCallbackFunc pfncpp_nvnCommandBufferSetMemoryCallback;
    CommandBufferSetMemoryCallbackDataFunc pfncpp_nvnCommandBufferSetMemoryCallbackData;
    CommandBufferAddCommandMemoryFunc pfncpp_nvnCommandBufferAddCommandMemory;
    CommandBufferAddControlMemoryFunc pfncpp_nvnCommandBufferAddControlMemory;
    CommandBufferGetCommandMemorySizeFunc pfncpp_nvnCommandBufferGetCommandMemorySize;
    CommandBufferGetCommandMemoryUsedFunc pfncpp_nvnCommandBufferGetCommandMemoryUsed;
    CommandBufferGetCommandMemoryFreeFunc pfncpp_nvnCommandBufferGetCommandMemoryFree;
    CommandBufferGetControlMemorySizeFunc pfncpp_nvnCommandBufferGetControlMemorySize;
    CommandBufferGetControlMemoryUsedFunc pfncpp_nvnCommandBufferGetControlMemoryUsed;
    CommandBufferGetControlMemoryFreeFunc pfncpp_nvnCommandBufferGetControlMemoryFree;
    CommandBufferBeginRecordingFunc pfncpp_nvnCommandBufferBeginRecording;
    CommandBufferEndRecordingFunc pfncpp_nvnCommandBufferEndRecording;
    CommandBufferCallCommandsFunc pfncpp_nvnCommandBufferCallCommands;
    CommandBufferCopyCommandsFunc pfncpp_nvnCommandBufferCopyCommands;
    CommandBufferBindBlendStateFunc pfncpp_nvnCommandBufferBindBlendState;
    CommandBufferBindChannelMaskStateFunc pfncpp_nvnCommandBufferBindChannelMaskState;
    CommandBufferBindColorStateFunc pfncpp_nvnCommandBufferBindColorState;
    CommandBufferBindMultisampleStateFunc pfncpp_nvnCommandBufferBindMultisampleState;
    CommandBufferBindPolygonStateFunc pfncpp_nvnCommandBufferBindPolygonState;
    CommandBufferBindDepthStencilStateFunc pfncpp_nvnCommandBufferBindDepthStencilState;
    CommandBufferBindVertexAttribStateFunc pfncpp_nvnCommandBufferBindVertexAttribState;
    CommandBufferBindVertexStreamStateFunc pfncpp_nvnCommandBufferBindVertexStreamState;
    CommandBufferBindProgramFunc pfncpp_nvnCommandBufferBindProgram;
    CommandBufferBindVertexBufferFunc pfncpp_nvnCommandBufferBindVertexBuffer;
    CommandBufferBindVertexBuffersFunc pfncpp_nvnCommandBufferBindVertexBuffers;
    CommandBufferBindUniformBufferFunc pfncpp_nvnCommandBufferBindUniformBuffer;
    CommandBufferBindUniformBuffersFunc pfncpp_nvnCommandBufferBindUniformBuffers;
    CommandBufferBindTransformFeedbackBufferFunc pfncpp_nvnCommandBufferBindTransformFeedbackBuffer;
    CommandBufferBindTransformFeedbackBuffersFunc pfncpp_nvnCommandBufferBindTransformFeedbackBuffers;
    CommandBufferBindStorageBufferFunc pfncpp_nvnCommandBufferBindStorageBuffer;
    CommandBufferBindStorageBuffersFunc pfncpp_nvnCommandBufferBindStorageBuffers;
    CommandBufferBindTextureFunc pfncpp_nvnCommandBufferBindTexture;
    CommandBufferBindTexturesFunc pfncpp_nvnCommandBufferBindTextures;
    CommandBufferBindImageFunc pfncpp_nvnCommandBufferBindImage;
    CommandBufferBindImagesFunc pfncpp_nvnCommandBufferBindImages;
    CommandBufferSetPatchSizeFunc pfncpp_nvnCommandBufferSetPatchSize;
    CommandBufferSetInnerTessellationLevelsFunc pfncpp_nvnCommandBufferSetInnerTessellationLevels;
    CommandBufferSetOuterTessellationLevelsFunc pfncpp_nvnCommandBufferSetOuterTessellationLevels;
    CommandBufferSetPrimitiveRestartFunc pfncpp_nvnCommandBufferSetPrimitiveRestart;
    CommandBufferBeginTransformFeedbackFunc pfncpp_nvnCommandBufferBeginTransformFeedback;
    CommandBufferEndTransformFeedbackFunc pfncpp_nvnCommandBufferEndTransformFeedback;
    CommandBufferPauseTransformFeedbackFunc pfncpp_nvnCommandBufferPauseTransformFeedback;
    CommandBufferResumeTransformFeedbackFunc pfncpp_nvnCommandBufferResumeTransformFeedback;
    CommandBufferDrawTransformFeedbackFunc pfncpp_nvnCommandBufferDrawTransformFeedback;
    CommandBufferDrawArraysFunc pfncpp_nvnCommandBufferDrawArrays;
    CommandBufferDrawElementsFunc pfncpp_nvnCommandBufferDrawElements;
    CommandBufferDrawElementsBaseVertexFunc pfncpp_nvnCommandBufferDrawElementsBaseVertex;
    CommandBufferDrawArraysInstancedFunc pfncpp_nvnCommandBufferDrawArraysInstanced;
    CommandBufferDrawElementsInstancedFunc pfncpp_nvnCommandBufferDrawElementsInstanced;
    CommandBufferDrawArraysIndirectFunc pfncpp_nvnCommandBufferDrawArraysIndirect;
    CommandBufferDrawElementsIndirectFunc pfncpp_nvnCommandBufferDrawElementsIndirect;
    CommandBufferMultiDrawArraysIndirectCountFunc pfncpp_nvnCommandBufferMultiDrawArraysIndirectCount;
    CommandBufferMultiDrawElementsIndirectCountFunc
        pfncpp_nvnCommandBufferMultiDrawElementsIndirectCount;
    CommandBufferClearColorFunc pfncpp_nvnCommandBufferClearColor;
    CommandBufferClearColoriFunc pfncpp_nvnCommandBufferClearColori;
    CommandBufferClearColoruiFunc pfncpp_nvnCommandBufferClearColorui;
    CommandBufferClearDepthStencilFunc pfncpp_nvnCommandBufferClearDepthStencil;
    CommandBufferDispatchComputeFunc pfncpp_nvnCommandBufferDispatchCompute;
    CommandBufferDispatchComputeIndirectFunc pfncpp_nvnCommandBufferDispatchComputeIndirect;
    CommandBufferSetViewportFunc pfncpp_nvnCommandBufferSetViewport;
    CommandBufferSetViewportsFunc pfncpp_nvnCommandBufferSetViewports;
    CommandBufferSetViewportSwizzlesFunc pfncpp_nvnCommandBufferSetViewportSwizzles;
    CommandBufferSetScissorFunc pfncpp_nvnCommandBufferSetScissor;
    CommandBufferSetScissorsFunc pfncpp_nvnCommandBufferSetScissors;
    CommandBufferSetDepthRangeFunc pfncpp_nvnCommandBufferSetDepthRange;
    CommandBufferSetDepthBoundsFunc pfncpp_nvnCommandBufferSetDepthBounds;
    CommandBufferSetDepthRangesFunc pfncpp_nvnCommandBufferSetDepthRanges;
    CommandBufferSetTiledCacheActionFunc pfncpp_nvnCommandBufferSetTiledCacheAction;
    CommandBufferSetTiledCacheTileSizeFunc pfncpp_nvnCommandBufferSetTiledCacheTileSize;
    CommandBufferBindSeparateTextureFunc pfncpp_nvnCommandBufferBindSeparateTexture;
    CommandBufferBindSeparateSamplerFunc pfncpp_nvnCommandBufferBindSeparateSampler;
    CommandBufferBindSeparateTexturesFunc pfncpp_nvnCommandBufferBindSeparateTextures;
    CommandBufferBindSeparateSamplersFunc pfncpp_nvnCommandBufferBindSeparateSamplers;
    CommandBufferSetStencilValueMaskFunc pfncpp_nvnCommandBufferSetStencilValueMask;
    CommandBufferSetStencilMaskFunc pfncpp_nvnCommandBufferSetStencilMask;
    CommandBufferSetStencilRefFunc pfncpp_nvnCommandBufferSetStencilRef;
    CommandBufferSetBlendColorFunc pfncpp_nvnCommandBufferSetBlendColor;
    CommandBufferSetPointSizeFunc pfncpp_nvnCommandBufferSetPointSize;
    CommandBufferSetLineWidthFunc pfncpp_nvnCommandBufferSetLineWidth;
    CommandBufferSetPolygonOffsetClampFunc pfncpp_nvnCommandBufferSetPolygonOffsetClamp;
    CommandBufferSetAlphaRefFunc pfncpp_nvnCommandBufferSetAlphaRef;
    CommandBufferSetSampleMaskFunc pfncpp_nvnCommandBufferSetSampleMask;
    CommandBufferSetRasterizerDiscardFunc pfncpp_nvnCommandBufferSetRasterizerDiscard;
    CommandBufferSetDepthClampFunc pfncpp_nvnCommandBufferSetDepthClamp;
    CommandBufferSetConservativeRasterEnableFunc pfncpp_nvnCommandBufferSetConservativeRasterEnable;
    CommandBufferSetConservativeRasterDilateFunc pfncpp_nvnCommandBufferSetConservativeRasterDilate;
    CommandBufferSetSubpixelPrecisionBiasFunc pfncpp_nvnCommandBufferSetSubpixelPrecisionBias;
    CommandBufferCopyBufferToTextureFunc pfncpp_nvnCommandBufferCopyBufferToTexture;
    CommandBufferCopyTextureToBufferFunc pfncpp_nvnCommandBufferCopyTextureToBuffer;
    CommandBufferCopyTextureToTextureFunc pfncpp_nvnCommandBufferCopyTextureToTexture;
    CommandBufferCopyBufferToBufferFunc pfncpp_nvnCommandBufferCopyBufferToBuffer;
    CommandBufferClearBufferFunc pfncpp_nvnCommandBufferClearBuffer;
    CommandBufferClearTextureFunc pfncpp_nvnCommandBufferClearTexture;
    CommandBufferClearTextureiFunc pfncpp_nvnCommandBufferClearTexturei;
    CommandBufferClearTextureuiFunc pfncpp_nvnCommandBufferClearTextureui;
    CommandBufferUpdateUniformBufferFunc pfncpp_nvnCommandBufferUpdateUniformBuffer;
    CommandBufferReportCounterFunc pfncpp_nvnCommandBufferReportCounter;
    CommandBufferResetCounterFunc pfncpp_nvnCommandBufferResetCounter;
    CommandBufferReportValueFunc pfncpp_nvnCommandBufferReportValue;
    CommandBufferSetRenderEnableFunc pfncpp_nvnCommandBufferSetRenderEnable;
    CommandBufferSetRenderEnableConditionalFunc pfncpp_nvnCommandBufferSetRenderEnableConditional;
    CommandBufferSetRenderTargetsFunc pfncpp_nvnCommandBufferSetRenderTargets;
    CommandBufferDiscardColorFunc pfncpp_nvnCommandBufferDiscardColor;
    CommandBufferDiscardDepthStencilFunc pfncpp_nvnCommandBufferDiscardDepthStencil;
    CommandBufferDownsampleFunc pfncpp_nvnCommandBufferDownsample;
    CommandBufferTiledDownsampleFunc pfncpp_nvnCommandBufferTiledDownsample;
    CommandBufferDownsampleTextureViewFunc pfncpp_nvnCommandBufferDownsampleTextureView;
    CommandBufferTiledDownsampleTextureViewFunc pfncpp_nvnCommandBufferTiledDownsampleTextureView;
    CommandBufferBarrierFunc pfncpp_nvnCommandBufferBarrier;
    CommandBufferWaitSyncFunc pfncpp_nvnCommandBufferWaitSync;
    CommandBufferFenceSyncFunc pfncpp_nvnCommandBufferFenceSync;
    CommandBufferSetTexturePoolFunc pfncpp_nvnCommandBufferSetTexturePool;
    CommandBufferSetSamplerPoolFunc pfncpp_nvnCommandBufferSetSamplerPool;
    CommandBufferSetShaderScratchMemoryFunc pfncpp_nvnCommandBufferSetShaderScratchMemory;
    CommandBufferSaveZCullDataFunc pfncpp_nvnCommandBufferSaveZCullData;
    CommandBufferRestoreZCullDataFunc pfncpp_nvnCommandBufferRestoreZCullData;
    CommandBufferSetCopyRowStrideFunc pfncpp_nvnCommandBufferSetCopyRowStride;
    CommandBufferSetCopyImageStrideFunc pfncpp_nvnCommandBufferSetCopyImageStride;
    CommandBufferGetCopyRowStrideFunc pfncpp_nvnCommandBufferGetCopyRowStride;
    CommandBufferGetCopyImageStrideFunc pfncpp_nvnCommandBufferGetCopyImageStride;
    CommandBufferDrawTextureFunc pfncpp_nvnCommandBufferDrawTexture;
    ProgramSetSubroutineLinkageFunc pfncpp_nvnProgramSetSubroutineLinkage;
    CommandBufferSetProgramSubroutinesFunc pfncpp_nvnCommandBufferSetProgramSubroutines;
    CommandBufferBindCoverageModulationTableFunc pfncpp_nvnCommandBufferBindCoverageModulationTable;
    CommandBufferResolveDepthBufferFunc pfncpp_nvnCommandBufferResolveDepthBuffer;
    CommandBufferSetColorReductionEnableFunc pfncpp_nvnCommandBufferSetColorReductionEnable;
    CommandBufferSetColorReductionThresholdsFunc pfncpp_nvnCommandBufferSetColorReductionThresholds;
    CommandBufferPushDebugGroupStaticFunc pfncpp_nvnCommandBufferPushDebugGroupStatic;
    CommandBufferPushDebugGroupDynamicFunc pfncpp_nvnCommandBufferPushDebugGroupDynamic;
    CommandBufferPushDebugGroupFunc pfncpp_nvnCommandBufferPushDebugGroup;
    CommandBufferPopDebugGroupFunc pfncpp_nvnCommandBufferPopDebugGroup;
    CommandBufferPopDebugGroupIdFunc pfncpp_nvnCommandBufferPopDebugGroupId;
    CommandBufferInsertDebugMarkerStaticFunc pfncpp_nvnCommandBufferInsertDebugMarkerStatic;
    CommandBufferInsertDebugMarkerDynamicFunc pfncpp_nvnCommandBufferInsertDebugMarkerDynamic;
    CommandBufferInsertDebugMarkerFunc pfncpp_nvnCommandBufferInsertDebugMarker;
    CommandBufferGetMemoryCallbackFunc pfncpp_nvnCommandBufferGetMemoryCallback;
    CommandBufferGetMemoryCallbackDataFunc pfncpp_nvnCommandBufferGetMemoryCallbackData;
    CommandBufferIsRecordingFunc pfncpp_nvnCommandBufferIsRecording;
    SyncInitializeFunc pfncpp_nvnSyncInitialize;
    SyncFinalizeFunc pfncpp_nvnSyncFinalize;
    SyncSetDebugLabelFunc pfncpp_nvnSyncSetDebugLabel;
    QueueFenceSyncFunc pfncpp_nvnQueueFenceSync;
    SyncWaitFunc pfncpp_nvnSyncWait;
    QueueWaitSyncFunc pfncpp_nvnQueueWaitSync;
    EventBuilderSetDefaultsFunc pfncpp_nvnEventBuilderSetDefaults;
    EventBuilderSetStorageFunc pfncpp_nvnEventBuilderSetStorage;
    EventBuilderGetStorageFunc pfncpp_nvnEventBuilderGetStorage;
    EventInitializeFunc pfncpp_nvnEventInitialize;
    EventFinalizeFunc pfncpp_nvnEventFinalize;
    EventGetValueFunc pfncpp_nvnEventGetValue;
    EventSignalFunc pfncpp_nvnEventSignal;
    CommandBufferWaitEventFunc pfncpp_nvnCommandBufferWaitEvent;
    CommandBufferSignalEventFunc pfncpp_nvnCommandBufferSignalEvent;
    CommandBufferSetStencilCullCriteriaFunc pfncpp_nvnCommandBufferSetStencilCullCriteria;

    // todo: verify this matches on diablo3
    void nvnLoadCPPProcs(Device* device, DeviceGetProcAddressFunc getProc) {
        pfncpp_nvnDeviceBuilderSetDefaults = (DeviceBuilderSetDefaultsFunc)getProc(device, "nvnDeviceBuilderSetDefaults");
        pfncpp_nvnDeviceBuilderSetFlags = (DeviceBuilderSetFlagsFunc)getProc(device, "nvnDeviceBuilderSetFlags");
        pfncpp_nvnDeviceBuilderGetFlags = (DeviceBuilderGetFlagsFunc)getProc(device, "nvnDeviceBuilderGetFlags");
        pfncpp_nvnDeviceInitialize = (DeviceInitializeFunc)getProc(device, "nvnDeviceInitialize");
        pfncpp_nvnDeviceFinalize = (DeviceFinalizeFunc)getProc(device, "nvnDeviceFinalize");
        pfncpp_nvnDeviceSetDebugLabel = (DeviceSetDebugLabelFunc)getProc(device, "nvnDeviceSetDebugLabel");
        pfncpp_nvnDeviceGetProcAddress = (DeviceGetProcAddressFunc)getProc(device, "nvnDeviceGetProcAddress");
        pfncpp_nvnDeviceGetInteger = (DeviceGetIntegerFunc)getProc(device, "nvnDeviceGetInteger");
        pfncpp_nvnDeviceGetCurrentTimestampInNanoseconds = (DeviceGetCurrentTimestampInNanosecondsFunc)getProc(
            device, "nvnDeviceGetCurrentTimestampInNanoseconds");
        pfncpp_nvnDeviceSetIntermediateShaderCache = (DeviceSetIntermediateShaderCacheFunc)getProc(
            device, "nvnDeviceSetIntermediateShaderCache");
        pfncpp_nvnDeviceGetTextureHandle = (DeviceGetTextureHandleFunc)getProc(device, "nvnDeviceGetTextureHandle");
        pfncpp_nvnDeviceGetTexelFetchHandle = (DeviceGetTexelFetchHandleFunc)getProc(device, "nvnDeviceGetTexelFetchHandle");
        pfncpp_nvnDeviceGetImageHandle = (DeviceGetImageHandleFunc)getProc(device, "nvnDeviceGetImageHandle");
        pfncpp_nvnDeviceInstallDebugCallback = (DeviceInstallDebugCallbackFunc)getProc(device, "nvnDeviceInstallDebugCallback");
        pfncpp_nvnDeviceGenerateDebugDomainId = (DeviceGenerateDebugDomainIdFunc)getProc(device, "nvnDeviceGenerateDebugDomainId");
        pfncpp_nvnDeviceSetWindowOriginMode = (DeviceSetWindowOriginModeFunc)getProc(device, "nvnDeviceSetWindowOriginMode");
        pfncpp_nvnDeviceSetDepthMode = (DeviceSetDepthModeFunc)getProc(device, "nvnDeviceSetDepthMode");
        pfncpp_nvnDeviceRegisterFastClearColor = (DeviceRegisterFastClearColorFunc)getProc(device, "nvnDeviceRegisterFastClearColor");
        pfncpp_nvnDeviceRegisterFastClearColori = (DeviceRegisterFastClearColoriFunc)getProc(device, "nvnDeviceRegisterFastClearColori");
        pfncpp_nvnDeviceRegisterFastClearColorui = (DeviceRegisterFastClearColoruiFunc)getProc(device, "nvnDeviceRegisterFastClearColorui");
        pfncpp_nvnDeviceRegisterFastClearDepth = (DeviceRegisterFastClearDepthFunc)getProc(device, "nvnDeviceRegisterFastClearDepth");
        pfncpp_nvnDeviceGetWindowOriginMode = (DeviceGetWindowOriginModeFunc)getProc(device, "nvnDeviceGetWindowOriginMode");
        pfncpp_nvnDeviceGetDepthMode = (DeviceGetDepthModeFunc)getProc(device, "nvnDeviceGetDepthMode");
        pfncpp_nvnDeviceGetTimestampInNanoseconds = (DeviceGetTimestampInNanosecondsFunc)getProc(device, "nvnDeviceGetTimestampInNanoseconds");
        pfncpp_nvnDeviceApplyDeferredFinalizes = (DeviceApplyDeferredFinalizesFunc)getProc(device, "nvnDeviceApplyDeferredFinalizes");
        pfncpp_nvnDeviceFinalizeCommandHandle = (DeviceFinalizeCommandHandleFunc)getProc(device, "nvnDeviceFinalizeCommandHandle");
        pfncpp_nvnDeviceWalkDebugDatabase = (DeviceWalkDebugDatabaseFunc)getProc(device, "nvnDeviceWalkDebugDatabase");
        pfncpp_nvnDeviceGetSeparateTextureHandle = (DeviceGetSeparateTextureHandleFunc)getProc(device, "nvnDeviceGetSeparateTextureHandle");
        pfncpp_nvnDeviceGetSeparateSamplerHandle = (DeviceGetSeparateSamplerHandleFunc)getProc(device, "nvnDeviceGetSeparateSamplerHandle");
        pfncpp_nvnDeviceIsExternalDebuggerAttached = (DeviceIsExternalDebuggerAttachedFunc)getProc(
            device, "nvnDeviceIsExternalDebuggerAttached");
        pfncpp_nvnQueueGetError = (QueueGetErrorFunc)getProc(device, "nvnQueueGetError");
        pfncpp_nvnQueueGetTotalCommandMemoryUsed = (QueueGetTotalCommandMemoryUsedFunc)getProc(device, "nvnQueueGetTotalCommandMemoryUsed");
        pfncpp_nvnQueueGetTotalControlMemoryUsed = (QueueGetTotalControlMemoryUsedFunc)getProc(device, "nvnQueueGetTotalControlMemoryUsed");
        pfncpp_nvnQueueGetTotalComputeMemoryUsed = (QueueGetTotalComputeMemoryUsedFunc)getProc(device, "nvnQueueGetTotalComputeMemoryUsed");
        pfncpp_nvnQueueResetMemoryUsageCounts = (QueueResetMemoryUsageCountsFunc)getProc(device, "nvnQueueResetMemoryUsageCounts");
        pfncpp_nvnQueueBuilderSetDevice = (QueueBuilderSetDeviceFunc)getProc(device, "nvnQueueBuilderSetDevice");
        pfncpp_nvnQueueBuilderSetDefaults = (QueueBuilderSetDefaultsFunc)getProc(device, "nvnQueueBuilderSetDefaults");
        pfncpp_nvnQueueBuilderSetFlags = (QueueBuilderSetFlagsFunc)getProc(device, "nvnQueueBuilderSetFlags");
        pfncpp_nvnQueueBuilderSetCommandMemorySize = (QueueBuilderSetCommandMemorySizeFunc)getProc(
            device, "nvnQueueBuilderSetCommandMemorySize");
        pfncpp_nvnQueueBuilderSetComputeMemorySize = (QueueBuilderSetComputeMemorySizeFunc)getProc(
            device, "nvnQueueBuilderSetComputeMemorySize");
        pfncpp_nvnQueueBuilderSetControlMemorySize = (QueueBuilderSetControlMemorySizeFunc)getProc(
            device, "nvnQueueBuilderSetControlMemorySize");
        pfncpp_nvnQueueBuilderGetQueueMemorySize = (QueueBuilderGetQueueMemorySizeFunc)getProc(device, "nvnQueueBuilderGetQueueMemorySize");
        pfncpp_nvnQueueBuilderSetQueueMemory = (QueueBuilderSetQueueMemoryFunc)getProc(device, "nvnQueueBuilderSetQueueMemory");
        pfncpp_nvnQueueBuilderSetCommandFlushThreshold = (QueueBuilderSetCommandFlushThresholdFunc)getProc(
            device, "nvnQueueBuilderSetCommandFlushThreshold");
        pfncpp_nvnQueueBuilderGetDevice = (QueueBuilderGetDeviceFunc)getProc(device, "nvnQueueBuilderGetDevice");
        pfncpp_nvnQueueBuilderGetFlags = (QueueBuilderGetFlagsFunc)getProc(device, "nvnQueueBuilderGetFlags");
        pfncpp_nvnQueueBuilderGetCommandMemorySize = (QueueBuilderGetCommandMemorySizeFunc)getProc(
            device, "nvnQueueBuilderGetCommandMemorySize");
        pfncpp_nvnQueueBuilderGetComputeMemorySize = (QueueBuilderGetComputeMemorySizeFunc)getProc(
            device, "nvnQueueBuilderGetComputeMemorySize");
        pfncpp_nvnQueueBuilderGetControlMemorySize = (QueueBuilderGetControlMemorySizeFunc)getProc(
            device, "nvnQueueBuilderGetControlMemorySize");
        pfncpp_nvnQueueBuilderGetCommandFlushThreshold = (QueueBuilderGetCommandFlushThresholdFunc)getProc(
            device, "nvnQueueBuilderGetCommandFlushThreshold");
        pfncpp_nvnQueueBuilderGetMemorySize = (QueueBuilderGetMemorySizeFunc)getProc(device, "nvnQueueBuilderGetMemorySize");
        pfncpp_nvnQueueBuilderGetMemory = (QueueBuilderGetMemoryFunc)getProc(device, "nvnQueueBuilderGetMemory");
        pfncpp_nvnQueueInitialize = (QueueInitializeFunc)getProc(device, "nvnQueueInitialize");
        pfncpp_nvnQueueFinalize = (QueueFinalizeFunc)getProc(device, "nvnQueueFinalize");
        pfncpp_nvnQueueSetDebugLabel = (QueueSetDebugLabelFunc)getProc(device, "nvnQueueSetDebugLabel");
        pfncpp_nvnQueueSubmitCommands = (QueueSubmitCommandsFunc)getProc(device, "nvnQueueSubmitCommands");
        pfncpp_nvnQueueFlush = (QueueFlushFunc)getProc(device, "nvnQueueFlush");
        pfncpp_nvnQueueFinish = (QueueFinishFunc)getProc(device, "nvnQueueFinish");
        pfncpp_nvnQueuePresentTexture = (QueuePresentTextureFunc)getProc(device, "nvnQueuePresentTexture");
        pfncpp_nvnQueueAcquireTexture = (QueueAcquireTextureFunc)getProc(device, "nvnQueueAcquireTexture");
        pfncpp_nvnWindowBuilderSetDevice = (WindowBuilderSetDeviceFunc)getProc(device, "nvnWindowBuilderSetDevice");
        pfncpp_nvnWindowBuilderSetDefaults = (WindowBuilderSetDefaultsFunc)getProc(device, "nvnWindowBuilderSetDefaults");
        pfncpp_nvnWindowBuilderSetNativeWindow = (WindowBuilderSetNativeWindowFunc)getProc(device, "nvnWindowBuilderSetNativeWindow");
        pfncpp_nvnWindowBuilderSetTextures = (WindowBuilderSetTexturesFunc)getProc(device, "nvnWindowBuilderSetTextures");
        pfncpp_nvnWindowBuilderSetPresentInterval = (WindowBuilderSetPresentIntervalFunc)getProc(device, "nvnWindowBuilderSetPresentInterval");
        pfncpp_nvnWindowBuilderGetDevice = (WindowBuilderGetDeviceFunc)getProc(device, "nvnWindowBuilderGetDevice");
        pfncpp_nvnWindowBuilderGetNumTextures = (WindowBuilderGetNumTexturesFunc)getProc(device, "nvnWindowBuilderGetNumTextures");
        pfncpp_nvnWindowBuilderGetTexture = (WindowBuilderGetTextureFunc)getProc(device, "nvnWindowBuilderGetTexture");
        pfncpp_nvnWindowBuilderGetNativeWindow = (WindowBuilderGetNativeWindowFunc)getProc(device, "nvnWindowBuilderGetNativeWindow");
        pfncpp_nvnWindowBuilderGetPresentInterval = (WindowBuilderGetPresentIntervalFunc)getProc(device, "nvnWindowBuilderGetPresentInterval");
        pfncpp_nvnWindowInitialize = (WindowInitializeFunc)getProc(device, "nvnWindowInitialize");
        pfncpp_nvnWindowFinalize = (WindowFinalizeFunc)getProc(device, "nvnWindowFinalize");
        pfncpp_nvnWindowSetDebugLabel = (WindowSetDebugLabelFunc)getProc(device, "nvnWindowSetDebugLabel");
        pfncpp_nvnWindowAcquireTexture = (WindowAcquireTextureFunc)getProc(device, "nvnWindowAcquireTexture");
        pfncpp_nvnWindowGetNativeWindow = (WindowGetNativeWindowFunc)getProc(device, "nvnWindowGetNativeWindow");
        pfncpp_nvnWindowGetPresentInterval = (WindowGetPresentIntervalFunc)getProc(device, "nvnWindowGetPresentInterval");
        pfncpp_nvnWindowSetPresentInterval = (WindowSetPresentIntervalFunc)getProc(device, "nvnWindowSetPresentInterval");
        pfncpp_nvnWindowSetCrop = (WindowSetCropFunc)getProc(device, "nvnWindowSetCrop");
        pfncpp_nvnWindowGetCrop = (WindowGetCropFunc)getProc(device, "nvnWindowGetCrop");
        pfncpp_nvnProgramInitialize = (ProgramInitializeFunc)getProc(device, "nvnProgramInitialize");
        pfncpp_nvnProgramFinalize = (ProgramFinalizeFunc)getProc(device, "nvnProgramFinalize");
        pfncpp_nvnProgramSetDebugLabel = (ProgramSetDebugLabelFunc)getProc(device, "nvnProgramSetDebugLabel");
        pfncpp_nvnProgramSetShaders = (ProgramSetShadersFunc)getProc(device, "nvnProgramSetShaders");
        pfncpp_nvnMemoryPoolBuilderSetDevice = (MemoryPoolBuilderSetDeviceFunc)getProc(device, "nvnMemoryPoolBuilderSetDevice");
        pfncpp_nvnMemoryPoolBuilderSetDefaults = (MemoryPoolBuilderSetDefaultsFunc)getProc(device, "nvnMemoryPoolBuilderSetDefaults");
        pfncpp_nvnMemoryPoolBuilderSetStorage = (MemoryPoolBuilderSetStorageFunc)getProc(device, "nvnMemoryPoolBuilderSetStorage");
        pfncpp_nvnMemoryPoolBuilderSetFlags = (MemoryPoolBuilderSetFlagsFunc)getProc(device, "nvnMemoryPoolBuilderSetFlags");
        pfncpp_nvnMemoryPoolBuilderGetDevice = (MemoryPoolBuilderGetDeviceFunc)getProc(device, "nvnMemoryPoolBuilderGetDevice");
        pfncpp_nvnMemoryPoolBuilderGetMemory = (MemoryPoolBuilderGetMemoryFunc)getProc(device, "nvnMemoryPoolBuilderGetMemory");
        pfncpp_nvnMemoryPoolBuilderGetSize = (MemoryPoolBuilderGetSizeFunc)getProc(device, "nvnMemoryPoolBuilderGetSize");
        pfncpp_nvnMemoryPoolBuilderGetFlags = (MemoryPoolBuilderGetFlagsFunc)getProc(device, "nvnMemoryPoolBuilderGetFlags");
        pfncpp_nvnMemoryPoolInitialize = (MemoryPoolInitializeFunc)getProc(device, "nvnMemoryPoolInitialize");
        pfncpp_nvnMemoryPoolSetDebugLabel = (MemoryPoolSetDebugLabelFunc)getProc(device, "nvnMemoryPoolSetDebugLabel");
        pfncpp_nvnMemoryPoolFinalize = (MemoryPoolFinalizeFunc)getProc(device, "nvnMemoryPoolFinalize");
        pfncpp_nvnMemoryPoolMap = (MemoryPoolMapFunc)getProc(device, "nvnMemoryPoolMap");
        pfncpp_nvnMemoryPoolFlushMappedRange = (MemoryPoolFlushMappedRangeFunc)getProc(device, "nvnMemoryPoolFlushMappedRange");
        pfncpp_nvnMemoryPoolInvalidateMappedRange = (MemoryPoolInvalidateMappedRangeFunc)getProc(device, "nvnMemoryPoolInvalidateMappedRange");
        pfncpp_nvnMemoryPoolGetBufferAddress = (MemoryPoolGetBufferAddressFunc)getProc(device, "nvnMemoryPoolGetBufferAddress");
        pfncpp_nvnMemoryPoolMapVirtual = (MemoryPoolMapVirtualFunc)getProc(device, "nvnMemoryPoolMapVirtual");
        pfncpp_nvnMemoryPoolGetSize = (MemoryPoolGetSizeFunc)getProc(device, "nvnMemoryPoolGetSize");
        pfncpp_nvnMemoryPoolGetFlags = (MemoryPoolGetFlagsFunc)getProc(device, "nvnMemoryPoolGetFlags");
        pfncpp_nvnTexturePoolInitialize = (TexturePoolInitializeFunc)getProc(device, "nvnTexturePoolInitialize");
        pfncpp_nvnTexturePoolSetDebugLabel = (TexturePoolSetDebugLabelFunc)getProc(device, "nvnTexturePoolSetDebugLabel");
        pfncpp_nvnTexturePoolFinalize = (TexturePoolFinalizeFunc)getProc(device, "nvnTexturePoolFinalize");
        pfncpp_nvnTexturePoolRegisterTexture = (TexturePoolRegisterTextureFunc)getProc(device, "nvnTexturePoolRegisterTexture");
        pfncpp_nvnTexturePoolRegisterImage = (TexturePoolRegisterImageFunc)getProc(device, "nvnTexturePoolRegisterImage");
        pfncpp_nvnTexturePoolGetMemoryPool = (TexturePoolGetMemoryPoolFunc)getProc(device, "nvnTexturePoolGetMemoryPool");
        pfncpp_nvnTexturePoolGetMemoryOffset = (TexturePoolGetMemoryOffsetFunc)getProc(device, "nvnTexturePoolGetMemoryOffset");
        pfncpp_nvnTexturePoolGetSize = (TexturePoolGetSizeFunc)getProc(device, "nvnTexturePoolGetSize");
        pfncpp_nvnSamplerPoolInitialize = (SamplerPoolInitializeFunc)getProc(device, "nvnSamplerPoolInitialize");
        pfncpp_nvnSamplerPoolSetDebugLabel = (SamplerPoolSetDebugLabelFunc)getProc(device, "nvnSamplerPoolSetDebugLabel");
        pfncpp_nvnSamplerPoolFinalize = (SamplerPoolFinalizeFunc)getProc(device, "nvnSamplerPoolFinalize");
        pfncpp_nvnSamplerPoolRegisterSampler = (SamplerPoolRegisterSamplerFunc)getProc(device, "nvnSamplerPoolRegisterSampler");
        pfncpp_nvnSamplerPoolRegisterSamplerBuilder = (SamplerPoolRegisterSamplerBuilderFunc)getProc(
            device, "nvnSamplerPoolRegisterSamplerBuilder");
        pfncpp_nvnSamplerPoolGetMemoryPool = (SamplerPoolGetMemoryPoolFunc)getProc(device, "nvnSamplerPoolGetMemoryPool");
        pfncpp_nvnSamplerPoolGetMemoryOffset = (SamplerPoolGetMemoryOffsetFunc)getProc(device, "nvnSamplerPoolGetMemoryOffset");
        pfncpp_nvnSamplerPoolGetSize = (SamplerPoolGetSizeFunc)getProc(device, "nvnSamplerPoolGetSize");
        pfncpp_nvnBufferBuilderSetDevice = (BufferBuilderSetDeviceFunc)getProc(device, "nvnBufferBuilderSetDevice");
        pfncpp_nvnBufferBuilderSetDefaults = (BufferBuilderSetDefaultsFunc)getProc(device, "nvnBufferBuilderSetDefaults");
        pfncpp_nvnBufferBuilderSetStorage = (BufferBuilderSetStorageFunc)getProc(device, "nvnBufferBuilderSetStorage");
        pfncpp_nvnBufferBuilderGetDevice = (BufferBuilderGetDeviceFunc)getProc(device, "nvnBufferBuilderGetDevice");
        pfncpp_nvnBufferBuilderGetMemoryPool = (BufferBuilderGetMemoryPoolFunc)getProc(device, "nvnBufferBuilderGetMemoryPool");
        pfncpp_nvnBufferBuilderGetMemoryOffset = (BufferBuilderGetMemoryOffsetFunc)getProc(device, "nvnBufferBuilderGetMemoryOffset");
        pfncpp_nvnBufferBuilderGetSize = (BufferBuilderGetSizeFunc)getProc(device, "nvnBufferBuilderGetSize");
        pfncpp_nvnBufferInitialize = (BufferInitializeFunc)getProc(device, "nvnBufferInitialize");
        pfncpp_nvnBufferSetDebugLabel = (BufferSetDebugLabelFunc)getProc(device, "nvnBufferSetDebugLabel");
        pfncpp_nvnBufferFinalize = (BufferFinalizeFunc)getProc(device, "nvnBufferFinalize");
        pfncpp_nvnBufferMap = (BufferMapFunc)getProc(device, "nvnBufferMap");
        pfncpp_nvnBufferGetAddress = (BufferGetAddressFunc)getProc(device, "nvnBufferGetAddress");
        pfncpp_nvnBufferFlushMappedRange = (BufferFlushMappedRangeFunc)getProc(device, "nvnBufferFlushMappedRange");
        pfncpp_nvnBufferInvalidateMappedRange = (BufferInvalidateMappedRangeFunc)getProc(device, "nvnBufferInvalidateMappedRange");
        pfncpp_nvnBufferGetMemoryPool = (BufferGetMemoryPoolFunc)getProc(device, "nvnBufferGetMemoryPool");
        pfncpp_nvnBufferGetMemoryOffset = (BufferGetMemoryOffsetFunc)getProc(device, "nvnBufferGetMemoryOffset");
        pfncpp_nvnBufferGetSize = (BufferGetSizeFunc)getProc(device, "nvnBufferGetSize");
        pfncpp_nvnBufferGetDebugID = (BufferGetDebugIDFunc)getProc(device, "nvnBufferGetDebugID");
        pfncpp_nvnTextureBuilderSetDevice = (TextureBuilderSetDeviceFunc)getProc(device, "nvnTextureBuilderSetDevice");
        pfncpp_nvnTextureBuilderSetDefaults = (TextureBuilderSetDefaultsFunc)getProc(device, "nvnTextureBuilderSetDefaults");
        pfncpp_nvnTextureBuilderSetFlags = (TextureBuilderSetFlagsFunc)getProc(device, "nvnTextureBuilderSetFlags");
        pfncpp_nvnTextureBuilderSetTarget = (TextureBuilderSetTargetFunc)getProc(device, "nvnTextureBuilderSetTarget");
        pfncpp_nvnTextureBuilderSetWidth = (TextureBuilderSetWidthFunc)getProc(device, "nvnTextureBuilderSetWidth");
        pfncpp_nvnTextureBuilderSetHeight = (TextureBuilderSetHeightFunc)getProc(device, "nvnTextureBuilderSetHeight");
        pfncpp_nvnTextureBuilderSetDepth = (TextureBuilderSetDepthFunc)getProc(device, "nvnTextureBuilderSetDepth");
        pfncpp_nvnTextureBuilderSetSize1D = (TextureBuilderSetSize1DFunc)getProc(device, "nvnTextureBuilderSetSize1D");
        pfncpp_nvnTextureBuilderSetSize2D = (TextureBuilderSetSize2DFunc)getProc(device, "nvnTextureBuilderSetSize2D");
        pfncpp_nvnTextureBuilderSetSize3D = (TextureBuilderSetSize3DFunc)getProc(device, "nvnTextureBuilderSetSize3D");
        pfncpp_nvnTextureBuilderSetLevels = (TextureBuilderSetLevelsFunc)getProc(device, "nvnTextureBuilderSetLevels");
        pfncpp_nvnTextureBuilderSetFormat = (TextureBuilderSetFormatFunc)getProc(device, "nvnTextureBuilderSetFormat");
        pfncpp_nvnTextureBuilderSetSamples = (TextureBuilderSetSamplesFunc)getProc(device, "nvnTextureBuilderSetSamples");
        pfncpp_nvnTextureBuilderSetSwizzle = (TextureBuilderSetSwizzleFunc)getProc(device, "nvnTextureBuilderSetSwizzle");
        pfncpp_nvnTextureBuilderSetDepthStencilMode = (TextureBuilderSetDepthStencilModeFunc)getProc(
            device, "nvnTextureBuilderSetDepthStencilMode");
        pfncpp_nvnTextureBuilderGetStorageSize = (TextureBuilderGetStorageSizeFunc)getProc(device, "nvnTextureBuilderGetStorageSize");
        pfncpp_nvnTextureBuilderGetStorageAlignment = (TextureBuilderGetStorageAlignmentFunc)getProc(
            device, "nvnTextureBuilderGetStorageAlignment");
        pfncpp_nvnTextureBuilderSetStorage = (TextureBuilderSetStorageFunc)getProc(device, "nvnTextureBuilderSetStorage");
        pfncpp_nvnTextureBuilderSetPackagedTextureData = (TextureBuilderSetPackagedTextureDataFunc)getProc(
            device, "nvnTextureBuilderSetPackagedTextureData");
        pfncpp_nvnTextureBuilderSetPackagedTextureLayout = (TextureBuilderSetPackagedTextureLayoutFunc)getProc(
            device, "nvnTextureBuilderSetPackagedTextureLayout");
        pfncpp_nvnTextureBuilderSetStride = (TextureBuilderSetStrideFunc)getProc(device, "nvnTextureBuilderSetStride");
        pfncpp_nvnTextureBuilderSetGLTextureName = (TextureBuilderSetGLTextureNameFunc)getProc(device, "nvnTextureBuilderSetGLTextureName");
        pfncpp_nvnTextureBuilderGetStorageClass = (TextureBuilderGetStorageClassFunc)getProc(device, "nvnTextureBuilderGetStorageClass");
        pfncpp_nvnTextureBuilderGetDevice = (TextureBuilderGetDeviceFunc)getProc(device, "nvnTextureBuilderGetDevice");
        pfncpp_nvnTextureBuilderGetFlags = (TextureBuilderGetFlagsFunc)getProc(device, "nvnTextureBuilderGetFlags");
        pfncpp_nvnTextureBuilderGetTarget = (TextureBuilderGetTargetFunc)getProc(device, "nvnTextureBuilderGetTarget");
        pfncpp_nvnTextureBuilderGetWidth = (TextureBuilderGetWidthFunc)getProc(device, "nvnTextureBuilderGetWidth");
        pfncpp_nvnTextureBuilderGetHeight = (TextureBuilderGetHeightFunc)getProc(device, "nvnTextureBuilderGetHeight");
        pfncpp_nvnTextureBuilderGetDepth = (TextureBuilderGetDepthFunc)getProc(device, "nvnTextureBuilderGetDepth");
        pfncpp_nvnTextureBuilderGetLevels = (TextureBuilderGetLevelsFunc)getProc(device, "nvnTextureBuilderGetLevels");
        pfncpp_nvnTextureBuilderGetFormat = (TextureBuilderGetFormatFunc)getProc(device, "nvnTextureBuilderGetFormat");
        pfncpp_nvnTextureBuilderGetSamples = (TextureBuilderGetSamplesFunc)getProc(device, "nvnTextureBuilderGetSamples");
        pfncpp_nvnTextureBuilderGetSwizzle = (TextureBuilderGetSwizzleFunc)getProc(device, "nvnTextureBuilderGetSwizzle");
        pfncpp_nvnTextureBuilderGetDepthStencilMode = (TextureBuilderGetDepthStencilModeFunc)getProc(
            device, "nvnTextureBuilderGetDepthStencilMode");
        pfncpp_nvnTextureBuilderGetPackagedTextureData = (TextureBuilderGetPackagedTextureDataFunc)getProc(
            device, "nvnTextureBuilderGetPackagedTextureData");
        pfncpp_nvnTextureBuilderGetPackagedTextureLayout = (TextureBuilderGetPackagedTextureLayoutFunc)getProc(
            device, "nvnTextureBuilderGetPackagedTextureLayout");
        pfncpp_nvnTextureBuilderGetStride = (TextureBuilderGetStrideFunc)getProc(device, "nvnTextureBuilderGetStride");
        pfncpp_nvnTextureBuilderGetSparseTileLayout = (TextureBuilderGetSparseTileLayoutFunc)getProc(
            device, "nvnTextureBuilderGetSparseTileLayout");
        pfncpp_nvnTextureBuilderGetGLTextureName = (TextureBuilderGetGLTextureNameFunc)getProc(device, "nvnTextureBuilderGetGLTextureName");
        pfncpp_nvnTextureBuilderGetZCullStorageSize = (TextureBuilderGetZCullStorageSizeFunc)getProc(
            device, "nvnTextureBuilderGetZCullStorageSize");
        pfncpp_nvnTextureBuilderGetMemoryPool = (TextureBuilderGetMemoryPoolFunc)getProc(device, "nvnTextureBuilderGetMemoryPool");
        pfncpp_nvnTextureBuilderGetMemoryOffset = (TextureBuilderGetMemoryOffsetFunc)getProc(device, "nvnTextureBuilderGetMemoryOffset");
        pfncpp_nvnTextureViewSetDefaults = (TextureViewSetDefaultsFunc)getProc(device, "nvnTextureViewSetDefaults");
        pfncpp_nvnTextureViewSetLevels = (TextureViewSetLevelsFunc)getProc(device, "nvnTextureViewSetLevels");
        pfncpp_nvnTextureViewSetLayers = (TextureViewSetLayersFunc)getProc(device, "nvnTextureViewSetLayers");
        pfncpp_nvnTextureViewSetFormat = (TextureViewSetFormatFunc)getProc(device, "nvnTextureViewSetFormat");
        pfncpp_nvnTextureViewSetSwizzle = (TextureViewSetSwizzleFunc)getProc(device, "nvnTextureViewSetSwizzle");
        pfncpp_nvnTextureViewSetDepthStencilMode = (TextureViewSetDepthStencilModeFunc)getProc(device, "nvnTextureViewSetDepthStencilMode");
        pfncpp_nvnTextureViewSetTarget = (TextureViewSetTargetFunc)getProc(device, "nvnTextureViewSetTarget");
        pfncpp_nvnTextureViewGetLevels = (TextureViewGetLevelsFunc)getProc(device, "nvnTextureViewGetLevels");
        pfncpp_nvnTextureViewGetLayers = (TextureViewGetLayersFunc)getProc(device, "nvnTextureViewGetLayers");
        pfncpp_nvnTextureViewGetFormat = (TextureViewGetFormatFunc)getProc(device, "nvnTextureViewGetFormat");
        pfncpp_nvnTextureViewGetSwizzle = (TextureViewGetSwizzleFunc)getProc(device, "nvnTextureViewGetSwizzle");
        pfncpp_nvnTextureViewGetDepthStencilMode = (TextureViewGetDepthStencilModeFunc)getProc(device, "nvnTextureViewGetDepthStencilMode");
        pfncpp_nvnTextureViewGetTarget = (TextureViewGetTargetFunc)getProc(device, "nvnTextureViewGetTarget");
        pfncpp_nvnTextureViewCompare = (TextureViewCompareFunc)getProc(device, "nvnTextureViewCompare");
        pfncpp_nvnTextureInitialize = (TextureInitializeFunc)getProc(device, "nvnTextureInitialize");
        pfncpp_nvnTextureGetZCullStorageSize = (TextureGetZCullStorageSizeFunc)getProc(device, "nvnTextureGetZCullStorageSize");
        pfncpp_nvnTextureFinalize = (TextureFinalizeFunc)getProc(device, "nvnTextureFinalize");
        pfncpp_nvnTextureSetDebugLabel = (TextureSetDebugLabelFunc)getProc(device, "nvnTextureSetDebugLabel");
        pfncpp_nvnTextureGetStorageClass = (TextureGetStorageClassFunc)getProc(device, "nvnTextureGetStorageClass");
        pfncpp_nvnTextureGetViewOffset = (TextureGetViewOffsetFunc)getProc(device, "nvnTextureGetViewOffset");
        pfncpp_nvnTextureGetFlags = (TextureGetFlagsFunc)getProc(device, "nvnTextureGetFlags");
        pfncpp_nvnTextureGetTarget = (TextureGetTargetFunc)getProc(device, "nvnTextureGetTarget");
        pfncpp_nvnTextureGetWidth = (TextureGetWidthFunc)getProc(device, "nvnTextureGetWidth");
        pfncpp_nvnTextureGetHeight = (TextureGetHeightFunc)getProc(device, "nvnTextureGetHeight");
        pfncpp_nvnTextureGetDepth = (TextureGetDepthFunc)getProc(device, "nvnTextureGetDepth");
        pfncpp_nvnTextureGetLevels = (TextureGetLevelsFunc)getProc(device, "nvnTextureGetLevels");
        pfncpp_nvnTextureGetFormat = (TextureGetFormatFunc)getProc(device, "nvnTextureGetFormat");
        pfncpp_nvnTextureGetSamples = (TextureGetSamplesFunc)getProc(device, "nvnTextureGetSamples");
        pfncpp_nvnTextureGetSwizzle = (TextureGetSwizzleFunc)getProc(device, "nvnTextureGetSwizzle");
        pfncpp_nvnTextureGetDepthStencilMode = (TextureGetDepthStencilModeFunc)getProc(device, "nvnTextureGetDepthStencilMode");
        pfncpp_nvnTextureGetStride = (TextureGetStrideFunc)getProc(device, "nvnTextureGetStride");
        pfncpp_nvnTextureGetTextureAddress = (TextureGetTextureAddressFunc)getProc(device, "nvnTextureGetTextureAddress");
        pfncpp_nvnTextureGetSparseTileLayout = (TextureGetSparseTileLayoutFunc)getProc(device, "nvnTextureGetSparseTileLayout");
        pfncpp_nvnTextureWriteTexels = (TextureWriteTexelsFunc)getProc(device, "nvnTextureWriteTexels");
        pfncpp_nvnTextureWriteTexelsStrided = (TextureWriteTexelsStridedFunc)getProc(device, "nvnTextureWriteTexelsStrided");
        pfncpp_nvnTextureReadTexels = (TextureReadTexelsFunc)getProc(device, "nvnTextureReadTexels");
        pfncpp_nvnTextureReadTexelsStrided = (TextureReadTexelsStridedFunc)getProc(device, "nvnTextureReadTexelsStrided");
        pfncpp_nvnTextureFlushTexels = (TextureFlushTexelsFunc)getProc(device, "nvnTextureFlushTexels");
        pfncpp_nvnTextureInvalidateTexels = (TextureInvalidateTexelsFunc)getProc(device, "nvnTextureInvalidateTexels");
        pfncpp_nvnTextureGetMemoryPool = (TextureGetMemoryPoolFunc)getProc(device, "nvnTextureGetMemoryPool");
        pfncpp_nvnTextureGetMemoryOffset = (TextureGetMemoryOffsetFunc)getProc(device, "nvnTextureGetMemoryOffset");
        pfncpp_nvnTextureGetStorageSize = (TextureGetStorageSizeFunc)getProc(device, "nvnTextureGetStorageSize");
        pfncpp_nvnTextureCompare = (TextureCompareFunc)getProc(device, "nvnTextureCompare");
        pfncpp_nvnTextureGetDebugID = (TextureGetDebugIDFunc)getProc(device, "nvnTextureGetDebugID");
        pfncpp_nvnSamplerBuilderSetDevice = (SamplerBuilderSetDeviceFunc)getProc(device, "nvnSamplerBuilderSetDevice");
        pfncpp_nvnSamplerBuilderSetDefaults = (SamplerBuilderSetDefaultsFunc)getProc(device, "nvnSamplerBuilderSetDefaults");
        pfncpp_nvnSamplerBuilderSetMinMagFilter = (SamplerBuilderSetMinMagFilterFunc)getProc(device, "nvnSamplerBuilderSetMinMagFilter");
        pfncpp_nvnSamplerBuilderSetWrapMode = (SamplerBuilderSetWrapModeFunc)getProc(device, "nvnSamplerBuilderSetWrapMode");
        pfncpp_nvnSamplerBuilderSetLodClamp = (SamplerBuilderSetLodClampFunc)getProc(device, "nvnSamplerBuilderSetLodClamp");
        pfncpp_nvnSamplerBuilderSetLodBias = (SamplerBuilderSetLodBiasFunc)getProc(device, "nvnSamplerBuilderSetLodBias");
        pfncpp_nvnSamplerBuilderSetCompare = (SamplerBuilderSetCompareFunc)getProc(device, "nvnSamplerBuilderSetCompare");
        pfncpp_nvnSamplerBuilderSetBorderColor = (SamplerBuilderSetBorderColorFunc)getProc(device, "nvnSamplerBuilderSetBorderColor");
        pfncpp_nvnSamplerBuilderSetBorderColori = (SamplerBuilderSetBorderColoriFunc)getProc(device, "nvnSamplerBuilderSetBorderColori");
        pfncpp_nvnSamplerBuilderSetBorderColorui = (SamplerBuilderSetBorderColoruiFunc)getProc(device, "nvnSamplerBuilderSetBorderColorui");
        pfncpp_nvnSamplerBuilderSetMaxAnisotropy = (SamplerBuilderSetMaxAnisotropyFunc)getProc(device, "nvnSamplerBuilderSetMaxAnisotropy");
        pfncpp_nvnSamplerBuilderSetReductionFilter = (SamplerBuilderSetReductionFilterFunc)getProc(
            device, "nvnSamplerBuilderSetReductionFilter");
        pfncpp_nvnSamplerBuilderSetLodSnap = (SamplerBuilderSetLodSnapFunc)getProc(device, "nvnSamplerBuilderSetLodSnap");
        pfncpp_nvnSamplerBuilderGetDevice = (SamplerBuilderGetDeviceFunc)getProc(device, "nvnSamplerBuilderGetDevice");
        pfncpp_nvnSamplerBuilderGetMinMagFilter = (SamplerBuilderGetMinMagFilterFunc)getProc(device, "nvnSamplerBuilderGetMinMagFilter");
        pfncpp_nvnSamplerBuilderGetWrapMode = (SamplerBuilderGetWrapModeFunc)getProc(device, "nvnSamplerBuilderGetWrapMode");
        pfncpp_nvnSamplerBuilderGetLodClamp = (SamplerBuilderGetLodClampFunc)getProc(device, "nvnSamplerBuilderGetLodClamp");
        pfncpp_nvnSamplerBuilderGetLodBias = (SamplerBuilderGetLodBiasFunc)getProc(device, "nvnSamplerBuilderGetLodBias");
        pfncpp_nvnSamplerBuilderGetCompare = (SamplerBuilderGetCompareFunc)getProc(device, "nvnSamplerBuilderGetCompare");
        pfncpp_nvnSamplerBuilderGetBorderColor = (SamplerBuilderGetBorderColorFunc)getProc(device, "nvnSamplerBuilderGetBorderColor");
        pfncpp_nvnSamplerBuilderGetBorderColori = (SamplerBuilderGetBorderColoriFunc)getProc(device, "nvnSamplerBuilderGetBorderColori");
        pfncpp_nvnSamplerBuilderGetBorderColorui = (SamplerBuilderGetBorderColoruiFunc)getProc(device, "nvnSamplerBuilderGetBorderColorui");
        pfncpp_nvnSamplerBuilderGetMaxAnisotropy = (SamplerBuilderGetMaxAnisotropyFunc)getProc(device, "nvnSamplerBuilderGetMaxAnisotropy");
        pfncpp_nvnSamplerBuilderGetReductionFilter = (SamplerBuilderGetReductionFilterFunc)getProc(
            device, "nvnSamplerBuilderGetReductionFilter");
        pfncpp_nvnSamplerBuilderGetLodSnap = (SamplerBuilderGetLodSnapFunc)getProc(device, "nvnSamplerBuilderGetLodSnap");
        pfncpp_nvnSamplerInitialize = (SamplerInitializeFunc)getProc(device, "nvnSamplerInitialize");
        pfncpp_nvnSamplerFinalize = (SamplerFinalizeFunc)getProc(device, "nvnSamplerFinalize");
        pfncpp_nvnSamplerSetDebugLabel = (SamplerSetDebugLabelFunc)getProc(device, "nvnSamplerSetDebugLabel");
        pfncpp_nvnSamplerGetMinMagFilter = (SamplerGetMinMagFilterFunc)getProc(device, "nvnSamplerGetMinMagFilter");
        pfncpp_nvnSamplerGetWrapMode = (SamplerGetWrapModeFunc)getProc(device, "nvnSamplerGetWrapMode");
        pfncpp_nvnSamplerGetLodClamp = (SamplerGetLodClampFunc)getProc(device, "nvnSamplerGetLodClamp");
        pfncpp_nvnSamplerGetLodBias = (SamplerGetLodBiasFunc)getProc(device, "nvnSamplerGetLodBias");
        pfncpp_nvnSamplerGetCompare = (SamplerGetCompareFunc)getProc(device, "nvnSamplerGetCompare");
        pfncpp_nvnSamplerGetBorderColor = (SamplerGetBorderColorFunc)getProc(device, "nvnSamplerGetBorderColor");
        pfncpp_nvnSamplerGetBorderColori = (SamplerGetBorderColoriFunc)getProc(device, "nvnSamplerGetBorderColori");
        pfncpp_nvnSamplerGetBorderColorui = (SamplerGetBorderColoruiFunc)getProc(device, "nvnSamplerGetBorderColorui");
        pfncpp_nvnSamplerGetMaxAnisotropy = (SamplerGetMaxAnisotropyFunc)getProc(device, "nvnSamplerGetMaxAnisotropy");
        pfncpp_nvnSamplerGetReductionFilter = (SamplerGetReductionFilterFunc)getProc(device, "nvnSamplerGetReductionFilter");
        pfncpp_nvnSamplerCompare = (SamplerCompareFunc)getProc(device, "nvnSamplerCompare");
        pfncpp_nvnSamplerGetDebugID = (SamplerGetDebugIDFunc)getProc(device, "nvnSamplerGetDebugID");
        pfncpp_nvnBlendStateSetDefaults = (BlendStateSetDefaultsFunc)getProc(device, "nvnBlendStateSetDefaults");
        pfncpp_nvnBlendStateSetBlendTarget = (BlendStateSetBlendTargetFunc)getProc(device, "nvnBlendStateSetBlendTarget");
        pfncpp_nvnBlendStateSetBlendFunc = (BlendStateSetBlendFuncFunc)getProc(device, "nvnBlendStateSetBlendFunc");
        pfncpp_nvnBlendStateSetBlendEquation = (BlendStateSetBlendEquationFunc)getProc(device, "nvnBlendStateSetBlendEquation");
        pfncpp_nvnBlendStateSetAdvancedMode = (BlendStateSetAdvancedModeFunc)getProc(device, "nvnBlendStateSetAdvancedMode");
        pfncpp_nvnBlendStateSetAdvancedOverlap = (BlendStateSetAdvancedOverlapFunc)getProc(device, "nvnBlendStateSetAdvancedOverlap");
        pfncpp_nvnBlendStateSetAdvancedPremultipliedSrc = (BlendStateSetAdvancedPremultipliedSrcFunc)getProc(
            device, "nvnBlendStateSetAdvancedPremultipliedSrc");
        pfncpp_nvnBlendStateSetAdvancedNormalizedDst = (BlendStateSetAdvancedNormalizedDstFunc)getProc(
            device, "nvnBlendStateSetAdvancedNormalizedDst");
        pfncpp_nvnBlendStateGetBlendTarget = (BlendStateGetBlendTargetFunc)getProc(device, "nvnBlendStateGetBlendTarget");
        pfncpp_nvnBlendStateGetBlendFunc = (BlendStateGetBlendFuncFunc)getProc(device, "nvnBlendStateGetBlendFunc");
        pfncpp_nvnBlendStateGetBlendEquation = (BlendStateGetBlendEquationFunc)getProc(device, "nvnBlendStateGetBlendEquation");
        pfncpp_nvnBlendStateGetAdvancedMode = (BlendStateGetAdvancedModeFunc)getProc(device, "nvnBlendStateGetAdvancedMode");
        pfncpp_nvnBlendStateGetAdvancedOverlap = (BlendStateGetAdvancedOverlapFunc)getProc(device, "nvnBlendStateGetAdvancedOverlap");
        pfncpp_nvnBlendStateGetAdvancedPremultipliedSrc = (BlendStateGetAdvancedPremultipliedSrcFunc)getProc(
            device, "nvnBlendStateGetAdvancedPremultipliedSrc");
        pfncpp_nvnBlendStateGetAdvancedNormalizedDst = (BlendStateGetAdvancedNormalizedDstFunc)getProc(
            device, "nvnBlendStateGetAdvancedNormalizedDst");
        pfncpp_nvnColorStateSetDefaults = (ColorStateSetDefaultsFunc)getProc(device, "nvnColorStateSetDefaults");
        pfncpp_nvnColorStateSetBlendEnable = (ColorStateSetBlendEnableFunc)getProc(device, "nvnColorStateSetBlendEnable");
        pfncpp_nvnColorStateSetLogicOp = (ColorStateSetLogicOpFunc)getProc(device, "nvnColorStateSetLogicOp");
        pfncpp_nvnColorStateSetAlphaTest = (ColorStateSetAlphaTestFunc)getProc(device, "nvnColorStateSetAlphaTest");
        pfncpp_nvnColorStateGetBlendEnable = (ColorStateGetBlendEnableFunc)getProc(device, "nvnColorStateGetBlendEnable");
        pfncpp_nvnColorStateGetLogicOp = (ColorStateGetLogicOpFunc)getProc(device, "nvnColorStateGetLogicOp");
        pfncpp_nvnColorStateGetAlphaTest = (ColorStateGetAlphaTestFunc)getProc(device, "nvnColorStateGetAlphaTest");
        pfncpp_nvnChannelMaskStateSetDefaults = (ChannelMaskStateSetDefaultsFunc)getProc(device, "nvnChannelMaskStateSetDefaults");
        pfncpp_nvnChannelMaskStateSetChannelMask = (ChannelMaskStateSetChannelMaskFunc)getProc(device, "nvnChannelMaskStateSetChannelMask");
        pfncpp_nvnChannelMaskStateGetChannelMask = (ChannelMaskStateGetChannelMaskFunc)getProc(device, "nvnChannelMaskStateGetChannelMask");
        pfncpp_nvnMultisampleStateSetDefaults = (MultisampleStateSetDefaultsFunc)getProc(device, "nvnMultisampleStateSetDefaults");
        pfncpp_nvnMultisampleStateSetMultisampleEnable = (MultisampleStateSetMultisampleEnableFunc)getProc(
            device, "nvnMultisampleStateSetMultisampleEnable");
        pfncpp_nvnMultisampleStateSetSamples = (MultisampleStateSetSamplesFunc)getProc(device, "nvnMultisampleStateSetSamples");
        pfncpp_nvnMultisampleStateSetAlphaToCoverageEnable = (MultisampleStateSetAlphaToCoverageEnableFunc)getProc(
            device, "nvnMultisampleStateSetAlphaToCoverageEnable");
        pfncpp_nvnMultisampleStateSetAlphaToCoverageDither = (MultisampleStateSetAlphaToCoverageDitherFunc)getProc(
            device, "nvnMultisampleStateSetAlphaToCoverageDither");
        pfncpp_nvnMultisampleStateGetMultisampleEnable = (MultisampleStateGetMultisampleEnableFunc)getProc(
            device, "nvnMultisampleStateGetMultisampleEnable");
        pfncpp_nvnMultisampleStateGetSamples = (MultisampleStateGetSamplesFunc)getProc(device, "nvnMultisampleStateGetSamples");
        pfncpp_nvnMultisampleStateGetAlphaToCoverageEnable = (MultisampleStateGetAlphaToCoverageEnableFunc)getProc(
            device, "nvnMultisampleStateGetAlphaToCoverageEnable");
        pfncpp_nvnMultisampleStateGetAlphaToCoverageDither = (MultisampleStateGetAlphaToCoverageDitherFunc)getProc(
            device, "nvnMultisampleStateGetAlphaToCoverageDither");
        pfncpp_nvnMultisampleStateSetRasterSamples = (MultisampleStateSetRasterSamplesFunc)getProc(
            device, "nvnMultisampleStateSetRasterSamples");
        pfncpp_nvnMultisampleStateGetRasterSamples = (MultisampleStateGetRasterSamplesFunc)getProc(
            device, "nvnMultisampleStateGetRasterSamples");
        pfncpp_nvnMultisampleStateSetCoverageModulationMode = (MultisampleStateSetCoverageModulationModeFunc)getProc(
            device, "nvnMultisampleStateSetCoverageModulationMode");
        pfncpp_nvnMultisampleStateGetCoverageModulationMode = (MultisampleStateGetCoverageModulationModeFunc)getProc(
            device, "nvnMultisampleStateGetCoverageModulationMode");
        pfncpp_nvnMultisampleStateSetCoverageToColorEnable = (MultisampleStateSetCoverageToColorEnableFunc)getProc(
            device, "nvnMultisampleStateSetCoverageToColorEnable");
        pfncpp_nvnMultisampleStateGetCoverageToColorEnable = (MultisampleStateGetCoverageToColorEnableFunc)getProc(
            device, "nvnMultisampleStateGetCoverageToColorEnable");
        pfncpp_nvnMultisampleStateSetCoverageToColorOutput = (MultisampleStateSetCoverageToColorOutputFunc)getProc(
            device, "nvnMultisampleStateSetCoverageToColorOutput");
        pfncpp_nvnMultisampleStateGetCoverageToColorOutput = (MultisampleStateGetCoverageToColorOutputFunc)getProc(
            device, "nvnMultisampleStateGetCoverageToColorOutput");
        pfncpp_nvnMultisampleStateSetSampleLocationsEnable = (MultisampleStateSetSampleLocationsEnableFunc)getProc(
            device, "nvnMultisampleStateSetSampleLocationsEnable");
        pfncpp_nvnMultisampleStateGetSampleLocationsEnable = (MultisampleStateGetSampleLocationsEnableFunc)getProc(
            device, "nvnMultisampleStateGetSampleLocationsEnable");
        pfncpp_nvnMultisampleStateGetSampleLocationsGrid = (MultisampleStateGetSampleLocationsGridFunc)getProc(
            device, "nvnMultisampleStateGetSampleLocationsGrid");
        pfncpp_nvnMultisampleStateSetSampleLocationsGridEnable = (MultisampleStateSetSampleLocationsGridEnableFunc)getProc(
            device, "nvnMultisampleStateSetSampleLocationsGridEnable");
        pfncpp_nvnMultisampleStateGetSampleLocationsGridEnable = (MultisampleStateGetSampleLocationsGridEnableFunc)getProc(
            device, "nvnMultisampleStateGetSampleLocationsGridEnable");
        pfncpp_nvnMultisampleStateSetSampleLocations = (MultisampleStateSetSampleLocationsFunc)getProc(
            device, "nvnMultisampleStateSetSampleLocations");
        pfncpp_nvnPolygonStateSetDefaults = (PolygonStateSetDefaultsFunc)getProc(device, "nvnPolygonStateSetDefaults");
        pfncpp_nvnPolygonStateSetCullFace = (PolygonStateSetCullFaceFunc)getProc(device, "nvnPolygonStateSetCullFace");
        pfncpp_nvnPolygonStateSetFrontFace = (PolygonStateSetFrontFaceFunc)getProc(device, "nvnPolygonStateSetFrontFace");
        pfncpp_nvnPolygonStateSetPolygonMode = (PolygonStateSetPolygonModeFunc)getProc(device, "nvnPolygonStateSetPolygonMode");
        pfncpp_nvnPolygonStateSetPolygonOffsetEnables = (PolygonStateSetPolygonOffsetEnablesFunc)getProc(device,
            "nvnPolygonStateSetPolygonOffsetEnables");
        pfncpp_nvnPolygonStateGetCullFace = (PolygonStateGetCullFaceFunc)getProc(device, "nvnPolygonStateGetCullFace");
        pfncpp_nvnPolygonStateGetFrontFace = (PolygonStateGetFrontFaceFunc)getProc(device, "nvnPolygonStateGetFrontFace");
        pfncpp_nvnPolygonStateGetPolygonMode = (PolygonStateGetPolygonModeFunc)getProc(device, "nvnPolygonStateGetPolygonMode");
        pfncpp_nvnPolygonStateGetPolygonOffsetEnables = (PolygonStateGetPolygonOffsetEnablesFunc)getProc(device,
            "nvnPolygonStateGetPolygonOffsetEnables");
        pfncpp_nvnDepthStencilStateSetDefaults = (DepthStencilStateSetDefaultsFunc)getProc(device, "nvnDepthStencilStateSetDefaults");
        pfncpp_nvnDepthStencilStateSetDepthTestEnable = (DepthStencilStateSetDepthTestEnableFunc)getProc(device,
            "nvnDepthStencilStateSetDepthTestEnable");
        pfncpp_nvnDepthStencilStateSetDepthWriteEnable = (DepthStencilStateSetDepthWriteEnableFunc)getProc(
            device, "nvnDepthStencilStateSetDepthWriteEnable");
        pfncpp_nvnDepthStencilStateSetDepthFunc = (DepthStencilStateSetDepthFuncFunc)getProc(device, "nvnDepthStencilStateSetDepthFunc");
        pfncpp_nvnDepthStencilStateSetStencilTestEnable = (DepthStencilStateSetStencilTestEnableFunc)getProc(
            device, "nvnDepthStencilStateSetStencilTestEnable");
        pfncpp_nvnDepthStencilStateSetStencilFunc = (DepthStencilStateSetStencilFuncFunc)getProc(device, "nvnDepthStencilStateSetStencilFunc");
        pfncpp_nvnDepthStencilStateSetStencilOp = (DepthStencilStateSetStencilOpFunc)getProc(device, "nvnDepthStencilStateSetStencilOp");
        pfncpp_nvnDepthStencilStateGetDepthTestEnable = (DepthStencilStateGetDepthTestEnableFunc)getProc(device,
            "nvnDepthStencilStateGetDepthTestEnable");
        pfncpp_nvnDepthStencilStateGetDepthWriteEnable = (DepthStencilStateGetDepthWriteEnableFunc)getProc(
            device, "nvnDepthStencilStateGetDepthWriteEnable");
        pfncpp_nvnDepthStencilStateGetDepthFunc = (DepthStencilStateGetDepthFuncFunc)getProc(device, "nvnDepthStencilStateGetDepthFunc");
        pfncpp_nvnDepthStencilStateGetStencilTestEnable = (DepthStencilStateGetStencilTestEnableFunc)getProc(
            device, "nvnDepthStencilStateGetStencilTestEnable");
        pfncpp_nvnDepthStencilStateGetStencilFunc = (DepthStencilStateGetStencilFuncFunc)getProc(device, "nvnDepthStencilStateGetStencilFunc");
        pfncpp_nvnDepthStencilStateGetStencilOp = (DepthStencilStateGetStencilOpFunc)getProc(device, "nvnDepthStencilStateGetStencilOp");
        pfncpp_nvnVertexAttribStateSetDefaults = (VertexAttribStateSetDefaultsFunc)getProc(device, "nvnVertexAttribStateSetDefaults");
        pfncpp_nvnVertexAttribStateSetFormat = (VertexAttribStateSetFormatFunc)getProc(device, "nvnVertexAttribStateSetFormat");
        pfncpp_nvnVertexAttribStateSetStreamIndex = (VertexAttribStateSetStreamIndexFunc)getProc(device, "nvnVertexAttribStateSetStreamIndex");
        pfncpp_nvnVertexAttribStateGetFormat = (VertexAttribStateGetFormatFunc)getProc(device, "nvnVertexAttribStateGetFormat");
        pfncpp_nvnVertexAttribStateGetStreamIndex = (VertexAttribStateGetStreamIndexFunc)getProc(device, "nvnVertexAttribStateGetStreamIndex");
        pfncpp_nvnVertexStreamStateSetDefaults = (VertexStreamStateSetDefaultsFunc)getProc(device, "nvnVertexStreamStateSetDefaults");
        pfncpp_nvnVertexStreamStateSetStride = (VertexStreamStateSetStrideFunc)getProc(device, "nvnVertexStreamStateSetStride");
        pfncpp_nvnVertexStreamStateSetDivisor = (VertexStreamStateSetDivisorFunc)getProc(device, "nvnVertexStreamStateSetDivisor");
        pfncpp_nvnVertexStreamStateGetStride = (VertexStreamStateGetStrideFunc)getProc(device, "nvnVertexStreamStateGetStride");
        pfncpp_nvnVertexStreamStateGetDivisor = (VertexStreamStateGetDivisorFunc)getProc(device, "nvnVertexStreamStateGetDivisor");
        pfncpp_nvnCommandBufferInitialize = (CommandBufferInitializeFunc)getProc(device, "nvnCommandBufferInitialize");
        pfncpp_nvnCommandBufferFinalize = (CommandBufferFinalizeFunc)getProc(device, "nvnCommandBufferFinalize");
        pfncpp_nvnCommandBufferSetDebugLabel = (CommandBufferSetDebugLabelFunc)getProc(device, "nvnCommandBufferSetDebugLabel");
        pfncpp_nvnCommandBufferSetMemoryCallback = (CommandBufferSetMemoryCallbackFunc)getProc(device, "nvnCommandBufferSetMemoryCallback");
        pfncpp_nvnCommandBufferSetMemoryCallbackData = (CommandBufferSetMemoryCallbackDataFunc)getProc(
            device, "nvnCommandBufferSetMemoryCallbackData");
        pfncpp_nvnCommandBufferAddCommandMemory = (CommandBufferAddCommandMemoryFunc)getProc(device, "nvnCommandBufferAddCommandMemory");
        pfncpp_nvnCommandBufferAddControlMemory = (CommandBufferAddControlMemoryFunc)getProc(device, "nvnCommandBufferAddControlMemory");
        pfncpp_nvnCommandBufferGetCommandMemorySize = (CommandBufferGetCommandMemorySizeFunc)getProc(
            device, "nvnCommandBufferGetCommandMemorySize");
        pfncpp_nvnCommandBufferGetCommandMemoryUsed = (CommandBufferGetCommandMemoryUsedFunc)getProc(
            device, "nvnCommandBufferGetCommandMemoryUsed");
        pfncpp_nvnCommandBufferGetCommandMemoryFree = (CommandBufferGetCommandMemoryFreeFunc)getProc(
            device, "nvnCommandBufferGetCommandMemoryFree");
        pfncpp_nvnCommandBufferGetControlMemorySize = (CommandBufferGetControlMemorySizeFunc)getProc(
            device, "nvnCommandBufferGetControlMemorySize");
        pfncpp_nvnCommandBufferGetControlMemoryUsed = (CommandBufferGetControlMemoryUsedFunc)getProc(
            device, "nvnCommandBufferGetControlMemoryUsed");
        pfncpp_nvnCommandBufferGetControlMemoryFree = (CommandBufferGetControlMemoryFreeFunc)getProc(
            device, "nvnCommandBufferGetControlMemoryFree");
        pfncpp_nvnCommandBufferBeginRecording = (CommandBufferBeginRecordingFunc)getProc(device, "nvnCommandBufferBeginRecording");
        pfncpp_nvnCommandBufferEndRecording = (CommandBufferEndRecordingFunc)getProc(device, "nvnCommandBufferEndRecording");
        pfncpp_nvnCommandBufferCallCommands = (CommandBufferCallCommandsFunc)getProc(device, "nvnCommandBufferCallCommands");
        pfncpp_nvnCommandBufferCopyCommands = (CommandBufferCopyCommandsFunc)getProc(device, "nvnCommandBufferCopyCommands");
        pfncpp_nvnCommandBufferBindBlendState = (CommandBufferBindBlendStateFunc)getProc(device, "nvnCommandBufferBindBlendState");
        pfncpp_nvnCommandBufferBindChannelMaskState = (CommandBufferBindChannelMaskStateFunc)getProc(
            device, "nvnCommandBufferBindChannelMaskState");
        pfncpp_nvnCommandBufferBindColorState = (CommandBufferBindColorStateFunc)getProc(device, "nvnCommandBufferBindColorState");
        pfncpp_nvnCommandBufferBindMultisampleState = (CommandBufferBindMultisampleStateFunc)getProc(
            device, "nvnCommandBufferBindMultisampleState");
        pfncpp_nvnCommandBufferBindPolygonState = (CommandBufferBindPolygonStateFunc)getProc(device, "nvnCommandBufferBindPolygonState");
        pfncpp_nvnCommandBufferBindDepthStencilState = (CommandBufferBindDepthStencilStateFunc)getProc(
            device, "nvnCommandBufferBindDepthStencilState");
        pfncpp_nvnCommandBufferBindVertexAttribState = (CommandBufferBindVertexAttribStateFunc)getProc(
            device, "nvnCommandBufferBindVertexAttribState");
        pfncpp_nvnCommandBufferBindVertexStreamState = (CommandBufferBindVertexStreamStateFunc)getProc(
            device, "nvnCommandBufferBindVertexStreamState");
        pfncpp_nvnCommandBufferBindProgram = (CommandBufferBindProgramFunc)getProc(device, "nvnCommandBufferBindProgram");
        pfncpp_nvnCommandBufferBindVertexBuffer = (CommandBufferBindVertexBufferFunc)getProc(device, "nvnCommandBufferBindVertexBuffer");
        pfncpp_nvnCommandBufferBindVertexBuffers = (CommandBufferBindVertexBuffersFunc)getProc(device, "nvnCommandBufferBindVertexBuffers");
        pfncpp_nvnCommandBufferBindUniformBuffer = (CommandBufferBindUniformBufferFunc)getProc(device, "nvnCommandBufferBindUniformBuffer");
        pfncpp_nvnCommandBufferBindUniformBuffers = (CommandBufferBindUniformBuffersFunc)getProc(device, "nvnCommandBufferBindUniformBuffers");
        pfncpp_nvnCommandBufferBindTransformFeedbackBuffer = (CommandBufferBindTransformFeedbackBufferFunc)getProc(
            device, "nvnCommandBufferBindTransformFeedbackBuffer");
        pfncpp_nvnCommandBufferBindTransformFeedbackBuffers = (CommandBufferBindTransformFeedbackBuffersFunc)getProc(
            device, "nvnCommandBufferBindTransformFeedbackBuffers");
        pfncpp_nvnCommandBufferBindStorageBuffer = (CommandBufferBindStorageBufferFunc)getProc(device, "nvnCommandBufferBindStorageBuffer");
        pfncpp_nvnCommandBufferBindStorageBuffers = (CommandBufferBindStorageBuffersFunc)getProc(device, "nvnCommandBufferBindStorageBuffers");
        pfncpp_nvnCommandBufferBindTexture = (CommandBufferBindTextureFunc)getProc(device, "nvnCommandBufferBindTexture");
        pfncpp_nvnCommandBufferBindTextures = (CommandBufferBindTexturesFunc)getProc(device, "nvnCommandBufferBindTextures");
        pfncpp_nvnCommandBufferBindImage = (CommandBufferBindImageFunc)getProc(device, "nvnCommandBufferBindImage");
        pfncpp_nvnCommandBufferBindImages = (CommandBufferBindImagesFunc)getProc(device, "nvnCommandBufferBindImages");
        pfncpp_nvnCommandBufferSetPatchSize = (CommandBufferSetPatchSizeFunc)getProc(device, "nvnCommandBufferSetPatchSize");
        pfncpp_nvnCommandBufferSetInnerTessellationLevels = (CommandBufferSetInnerTessellationLevelsFunc)getProc(
            device, "nvnCommandBufferSetInnerTessellationLevels");
        pfncpp_nvnCommandBufferSetOuterTessellationLevels = (CommandBufferSetOuterTessellationLevelsFunc)getProc(
            device, "nvnCommandBufferSetOuterTessellationLevels");
        pfncpp_nvnCommandBufferSetPrimitiveRestart = (CommandBufferSetPrimitiveRestartFunc)getProc(
            device, "nvnCommandBufferSetPrimitiveRestart");
        pfncpp_nvnCommandBufferBeginTransformFeedback = (CommandBufferBeginTransformFeedbackFunc)getProc(device,
            "nvnCommandBufferBeginTransformFeedback");
        pfncpp_nvnCommandBufferEndTransformFeedback = (CommandBufferEndTransformFeedbackFunc)getProc(
            device, "nvnCommandBufferEndTransformFeedback");
        pfncpp_nvnCommandBufferPauseTransformFeedback = (CommandBufferPauseTransformFeedbackFunc)getProc(device,
            "nvnCommandBufferPauseTransformFeedback");
        pfncpp_nvnCommandBufferResumeTransformFeedback = (CommandBufferResumeTransformFeedbackFunc)getProc(
            device, "nvnCommandBufferResumeTransformFeedback");
        pfncpp_nvnCommandBufferDrawTransformFeedback = (CommandBufferDrawTransformFeedbackFunc)getProc(
            device, "nvnCommandBufferDrawTransformFeedback");
        pfncpp_nvnCommandBufferDrawArrays = (CommandBufferDrawArraysFunc)getProc(device, "nvnCommandBufferDrawArrays");
        pfncpp_nvnCommandBufferDrawElements = (CommandBufferDrawElementsFunc)getProc(device, "nvnCommandBufferDrawElements");
        pfncpp_nvnCommandBufferDrawElementsBaseVertex = (CommandBufferDrawElementsBaseVertexFunc)getProc(device,
            "nvnCommandBufferDrawElementsBaseVertex");
        pfncpp_nvnCommandBufferDrawArraysInstanced = (CommandBufferDrawArraysInstancedFunc)getProc(
            device, "nvnCommandBufferDrawArraysInstanced");
        pfncpp_nvnCommandBufferDrawElementsInstanced = (CommandBufferDrawElementsInstancedFunc)getProc(
            device, "nvnCommandBufferDrawElementsInstanced");
        pfncpp_nvnCommandBufferDrawArraysIndirect = (CommandBufferDrawArraysIndirectFunc)getProc(device, "nvnCommandBufferDrawArraysIndirect");
        pfncpp_nvnCommandBufferDrawElementsIndirect = (CommandBufferDrawElementsIndirectFunc)getProc(
            device, "nvnCommandBufferDrawElementsIndirect");
        pfncpp_nvnCommandBufferMultiDrawArraysIndirectCount = (CommandBufferMultiDrawArraysIndirectCountFunc)getProc(
            device, "nvnCommandBufferMultiDrawArraysIndirectCount");
        pfncpp_nvnCommandBufferMultiDrawElementsIndirectCount = (CommandBufferMultiDrawElementsIndirectCountFunc)getProc(
            device, "nvnCommandBufferMultiDrawElementsIndirectCount");
        pfncpp_nvnCommandBufferClearColor = (CommandBufferClearColorFunc)getProc(device, "nvnCommandBufferClearColor");
        pfncpp_nvnCommandBufferClearColori = (CommandBufferClearColoriFunc)getProc(device, "nvnCommandBufferClearColori");
        pfncpp_nvnCommandBufferClearColorui = (CommandBufferClearColoruiFunc)getProc(device, "nvnCommandBufferClearColorui");
        pfncpp_nvnCommandBufferClearDepthStencil = (CommandBufferClearDepthStencilFunc)getProc(device, "nvnCommandBufferClearDepthStencil");
        pfncpp_nvnCommandBufferDispatchCompute = (CommandBufferDispatchComputeFunc)getProc(device, "nvnCommandBufferDispatchCompute");
        pfncpp_nvnCommandBufferDispatchComputeIndirect = (CommandBufferDispatchComputeIndirectFunc)getProc(
            device, "nvnCommandBufferDispatchComputeIndirect");
        pfncpp_nvnCommandBufferSetViewport = (CommandBufferSetViewportFunc)getProc(device, "nvnCommandBufferSetViewport");
        pfncpp_nvnCommandBufferSetViewports = (CommandBufferSetViewportsFunc)getProc(device, "nvnCommandBufferSetViewports");
        pfncpp_nvnCommandBufferSetViewportSwizzles = (CommandBufferSetViewportSwizzlesFunc)getProc(
            device, "nvnCommandBufferSetViewportSwizzles");
        pfncpp_nvnCommandBufferSetScissor = (CommandBufferSetScissorFunc)getProc(device, "nvnCommandBufferSetScissor");
        pfncpp_nvnCommandBufferSetScissors = (CommandBufferSetScissorsFunc)getProc(device, "nvnCommandBufferSetScissors");
        pfncpp_nvnCommandBufferSetDepthRange = (CommandBufferSetDepthRangeFunc)getProc(device, "nvnCommandBufferSetDepthRange");
        pfncpp_nvnCommandBufferSetDepthBounds = (CommandBufferSetDepthBoundsFunc)getProc(device, "nvnCommandBufferSetDepthBounds");
        pfncpp_nvnCommandBufferSetDepthRanges = (CommandBufferSetDepthRangesFunc)getProc(device, "nvnCommandBufferSetDepthRanges");
        pfncpp_nvnCommandBufferSetTiledCacheAction = (CommandBufferSetTiledCacheActionFunc)getProc(
            device, "nvnCommandBufferSetTiledCacheAction");
        pfncpp_nvnCommandBufferSetTiledCacheTileSize = (CommandBufferSetTiledCacheTileSizeFunc)getProc(
            device, "nvnCommandBufferSetTiledCacheTileSize");
        pfncpp_nvnCommandBufferBindSeparateTexture = (CommandBufferBindSeparateTextureFunc)getProc(
            device, "nvnCommandBufferBindSeparateTexture");
        pfncpp_nvnCommandBufferBindSeparateSampler = (CommandBufferBindSeparateSamplerFunc)getProc(
            device, "nvnCommandBufferBindSeparateSampler");
        pfncpp_nvnCommandBufferBindSeparateTextures = (CommandBufferBindSeparateTexturesFunc)getProc(
            device, "nvnCommandBufferBindSeparateTextures");
        pfncpp_nvnCommandBufferBindSeparateSamplers = (CommandBufferBindSeparateSamplersFunc)getProc(
            device, "nvnCommandBufferBindSeparateSamplers");
        pfncpp_nvnCommandBufferSetStencilValueMask = (CommandBufferSetStencilValueMaskFunc)getProc(
            device, "nvnCommandBufferSetStencilValueMask");
        pfncpp_nvnCommandBufferSetStencilMask = (CommandBufferSetStencilMaskFunc)getProc(device, "nvnCommandBufferSetStencilMask");
        pfncpp_nvnCommandBufferSetStencilRef = (CommandBufferSetStencilRefFunc)getProc(device, "nvnCommandBufferSetStencilRef");
        pfncpp_nvnCommandBufferSetBlendColor = (CommandBufferSetBlendColorFunc)getProc(device, "nvnCommandBufferSetBlendColor");
        pfncpp_nvnCommandBufferSetPointSize = (CommandBufferSetPointSizeFunc)getProc(device, "nvnCommandBufferSetPointSize");
        pfncpp_nvnCommandBufferSetLineWidth = (CommandBufferSetLineWidthFunc)getProc(device, "nvnCommandBufferSetLineWidth");
        pfncpp_nvnCommandBufferSetPolygonOffsetClamp = (CommandBufferSetPolygonOffsetClampFunc)getProc(
            device, "nvnCommandBufferSetPolygonOffsetClamp");
        pfncpp_nvnCommandBufferSetAlphaRef = (CommandBufferSetAlphaRefFunc)getProc(device, "nvnCommandBufferSetAlphaRef");
        pfncpp_nvnCommandBufferSetSampleMask = (CommandBufferSetSampleMaskFunc)getProc(device, "nvnCommandBufferSetSampleMask");
        pfncpp_nvnCommandBufferSetRasterizerDiscard = (CommandBufferSetRasterizerDiscardFunc)getProc(
            device, "nvnCommandBufferSetRasterizerDiscard");
        pfncpp_nvnCommandBufferSetDepthClamp = (CommandBufferSetDepthClampFunc)getProc(device, "nvnCommandBufferSetDepthClamp");
        pfncpp_nvnCommandBufferSetConservativeRasterEnable = (CommandBufferSetConservativeRasterEnableFunc)getProc(
            device, "nvnCommandBufferSetConservativeRasterEnable");
        pfncpp_nvnCommandBufferSetConservativeRasterDilate = (CommandBufferSetConservativeRasterDilateFunc)getProc(
            device, "nvnCommandBufferSetConservativeRasterDilate");
        pfncpp_nvnCommandBufferSetSubpixelPrecisionBias = (CommandBufferSetSubpixelPrecisionBiasFunc)getProc(
            device, "nvnCommandBufferSetSubpixelPrecisionBias");
        pfncpp_nvnCommandBufferCopyBufferToTexture = (CommandBufferCopyBufferToTextureFunc)getProc(
            device, "nvnCommandBufferCopyBufferToTexture");
        pfncpp_nvnCommandBufferCopyTextureToBuffer = (CommandBufferCopyTextureToBufferFunc)getProc(
            device, "nvnCommandBufferCopyTextureToBuffer");
        pfncpp_nvnCommandBufferCopyTextureToTexture = (CommandBufferCopyTextureToTextureFunc)getProc(
            device, "nvnCommandBufferCopyTextureToTexture");
        pfncpp_nvnCommandBufferCopyBufferToBuffer = (CommandBufferCopyBufferToBufferFunc)getProc(device, "nvnCommandBufferCopyBufferToBuffer");
        pfncpp_nvnCommandBufferClearBuffer = (CommandBufferClearBufferFunc)getProc(device, "nvnCommandBufferClearBuffer");
        pfncpp_nvnCommandBufferClearTexture = (CommandBufferClearTextureFunc)getProc(device, "nvnCommandBufferClearTexture");
        pfncpp_nvnCommandBufferClearTexturei = (CommandBufferClearTextureiFunc)getProc(device, "nvnCommandBufferClearTexturei");
        pfncpp_nvnCommandBufferClearTextureui = (CommandBufferClearTextureuiFunc)getProc(device, "nvnCommandBufferClearTextureui");
        pfncpp_nvnCommandBufferUpdateUniformBuffer = (CommandBufferUpdateUniformBufferFunc)getProc(
            device, "nvnCommandBufferUpdateUniformBuffer");
        pfncpp_nvnCommandBufferReportCounter = (CommandBufferReportCounterFunc)getProc(device, "nvnCommandBufferReportCounter");
        pfncpp_nvnCommandBufferResetCounter = (CommandBufferResetCounterFunc)getProc(device, "nvnCommandBufferResetCounter");
        pfncpp_nvnCommandBufferReportValue = (CommandBufferReportValueFunc)getProc(device, "nvnCommandBufferReportValue");
        pfncpp_nvnCommandBufferSetRenderEnable = (CommandBufferSetRenderEnableFunc)getProc(device, "nvnCommandBufferSetRenderEnable");
        pfncpp_nvnCommandBufferSetRenderEnableConditional = (CommandBufferSetRenderEnableConditionalFunc)getProc(
            device, "nvnCommandBufferSetRenderEnableConditional");
        pfncpp_nvnCommandBufferSetRenderTargets = (CommandBufferSetRenderTargetsFunc)getProc(device, "nvnCommandBufferSetRenderTargets");
        pfncpp_nvnCommandBufferDiscardColor = (CommandBufferDiscardColorFunc)getProc(device, "nvnCommandBufferDiscardColor");
        pfncpp_nvnCommandBufferDiscardDepthStencil = (CommandBufferDiscardDepthStencilFunc)getProc(
            device, "nvnCommandBufferDiscardDepthStencil");
        pfncpp_nvnCommandBufferDownsample = (CommandBufferDownsampleFunc)getProc(device, "nvnCommandBufferDownsample");
        pfncpp_nvnCommandBufferTiledDownsample = (CommandBufferTiledDownsampleFunc)getProc(device, "nvnCommandBufferTiledDownsample");
        pfncpp_nvnCommandBufferDownsampleTextureView = (CommandBufferDownsampleTextureViewFunc)getProc(
            device, "nvnCommandBufferDownsampleTextureView");
        pfncpp_nvnCommandBufferTiledDownsampleTextureView = (CommandBufferTiledDownsampleTextureViewFunc)getProc(
            device, "nvnCommandBufferTiledDownsampleTextureView");
        pfncpp_nvnCommandBufferBarrier = (CommandBufferBarrierFunc)getProc(device, "nvnCommandBufferBarrier");
        pfncpp_nvnCommandBufferWaitSync = (CommandBufferWaitSyncFunc)getProc(device, "nvnCommandBufferWaitSync");
        pfncpp_nvnCommandBufferFenceSync = (CommandBufferFenceSyncFunc)getProc(device, "nvnCommandBufferFenceSync");
        pfncpp_nvnCommandBufferSetTexturePool = (CommandBufferSetTexturePoolFunc)getProc(device, "nvnCommandBufferSetTexturePool");
        pfncpp_nvnCommandBufferSetSamplerPool = (CommandBufferSetSamplerPoolFunc)getProc(device, "nvnCommandBufferSetSamplerPool");
        pfncpp_nvnCommandBufferSetShaderScratchMemory = (CommandBufferSetShaderScratchMemoryFunc)getProc(device,
            "nvnCommandBufferSetShaderScratchMemory");
        pfncpp_nvnCommandBufferSaveZCullData = (CommandBufferSaveZCullDataFunc)getProc(device, "nvnCommandBufferSaveZCullData");
        pfncpp_nvnCommandBufferRestoreZCullData = (CommandBufferRestoreZCullDataFunc)getProc(device, "nvnCommandBufferRestoreZCullData");
        pfncpp_nvnCommandBufferSetCopyRowStride = (CommandBufferSetCopyRowStrideFunc)getProc(device, "nvnCommandBufferSetCopyRowStride");
        pfncpp_nvnCommandBufferSetCopyImageStride = (CommandBufferSetCopyImageStrideFunc)getProc(device, "nvnCommandBufferSetCopyImageStride");
        pfncpp_nvnCommandBufferGetCopyRowStride = (CommandBufferGetCopyRowStrideFunc)getProc(device, "nvnCommandBufferGetCopyRowStride");
        pfncpp_nvnCommandBufferGetCopyImageStride = (CommandBufferGetCopyImageStrideFunc)getProc(device, "nvnCommandBufferGetCopyImageStride");
        pfncpp_nvnCommandBufferDrawTexture = (CommandBufferDrawTextureFunc)getProc(device, "nvnCommandBufferDrawTexture");
        pfncpp_nvnProgramSetSubroutineLinkage = (ProgramSetSubroutineLinkageFunc)getProc(device, "nvnProgramSetSubroutineLinkage");
        pfncpp_nvnCommandBufferSetProgramSubroutines = (CommandBufferSetProgramSubroutinesFunc)getProc(
            device, "nvnCommandBufferSetProgramSubroutines");
        pfncpp_nvnCommandBufferBindCoverageModulationTable = (CommandBufferBindCoverageModulationTableFunc)getProc(
            device, "nvnCommandBufferBindCoverageModulationTable");
        pfncpp_nvnCommandBufferResolveDepthBuffer = (CommandBufferResolveDepthBufferFunc)getProc(device, "nvnCommandBufferResolveDepthBuffer");
        pfncpp_nvnCommandBufferSetColorReductionEnable = (CommandBufferSetColorReductionEnableFunc)getProc(
            device, "nvnCommandBufferSetColorReductionEnable");
        pfncpp_nvnCommandBufferSetColorReductionThresholds = (CommandBufferSetColorReductionThresholdsFunc)getProc(
            device, "nvnCommandBufferSetColorReductionThresholds");
        pfncpp_nvnCommandBufferPushDebugGroupStatic = (CommandBufferPushDebugGroupStaticFunc)getProc(
            device, "nvnCommandBufferPushDebugGroupStatic");
        pfncpp_nvnCommandBufferPushDebugGroupDynamic = (CommandBufferPushDebugGroupDynamicFunc)getProc(
            device, "nvnCommandBufferPushDebugGroupDynamic");
        pfncpp_nvnCommandBufferPushDebugGroup = (CommandBufferPushDebugGroupFunc)getProc(device, "nvnCommandBufferPushDebugGroup");
        pfncpp_nvnCommandBufferPopDebugGroup = (CommandBufferPopDebugGroupFunc)getProc(device, "nvnCommandBufferPopDebugGroup");
        pfncpp_nvnCommandBufferPopDebugGroupId = (CommandBufferPopDebugGroupIdFunc)getProc(device, "nvnCommandBufferPopDebugGroupId");
        pfncpp_nvnCommandBufferInsertDebugMarkerStatic = (CommandBufferInsertDebugMarkerStaticFunc)getProc(
            device, "nvnCommandBufferInsertDebugMarkerStatic");
        pfncpp_nvnCommandBufferInsertDebugMarkerDynamic = (CommandBufferInsertDebugMarkerDynamicFunc)getProc(
            device, "nvnCommandBufferInsertDebugMarkerDynamic");
        pfncpp_nvnCommandBufferInsertDebugMarker = (CommandBufferInsertDebugMarkerFunc)getProc(device, "nvnCommandBufferInsertDebugMarker");
        pfncpp_nvnCommandBufferGetMemoryCallback = (CommandBufferGetMemoryCallbackFunc)getProc(device, "nvnCommandBufferGetMemoryCallback");
        pfncpp_nvnCommandBufferGetMemoryCallbackData = (CommandBufferGetMemoryCallbackDataFunc)getProc(
            device, "nvnCommandBufferGetMemoryCallbackData");
        pfncpp_nvnCommandBufferIsRecording = (CommandBufferIsRecordingFunc)getProc(device, "nvnCommandBufferIsRecording");
        pfncpp_nvnSyncInitialize = (SyncInitializeFunc)getProc(device, "nvnSyncInitialize");
        pfncpp_nvnSyncFinalize = (SyncFinalizeFunc)getProc(device, "nvnSyncFinalize");
        pfncpp_nvnSyncSetDebugLabel = (SyncSetDebugLabelFunc)getProc(device, "nvnSyncSetDebugLabel");
        pfncpp_nvnQueueFenceSync = (QueueFenceSyncFunc)getProc(device, "nvnQueueFenceSync");
        pfncpp_nvnSyncWait = (SyncWaitFunc)getProc(device, "nvnSyncWait");
        pfncpp_nvnQueueWaitSync = (QueueWaitSyncFunc)getProc(device, "nvnQueueWaitSync");
        pfncpp_nvnEventBuilderSetDefaults = (EventBuilderSetDefaultsFunc)getProc(device, "nvnEventBuilderSetDefaults");
        pfncpp_nvnEventBuilderSetStorage = (EventBuilderSetStorageFunc)getProc(device, "nvnEventBuilderSetStorage");
        pfncpp_nvnEventBuilderGetStorage = (EventBuilderGetStorageFunc)getProc(device, "nvnEventBuilderGetStorage");
        pfncpp_nvnEventInitialize = (EventInitializeFunc)getProc(device, "nvnEventInitialize");
        pfncpp_nvnEventFinalize = (EventFinalizeFunc)getProc(device, "nvnEventFinalize");
        pfncpp_nvnEventGetValue = (EventGetValueFunc)getProc(device, "nvnEventGetValue");
        pfncpp_nvnEventSignal = (EventSignalFunc)getProc(device, "nvnEventSignal");
        pfncpp_nvnCommandBufferWaitEvent = (CommandBufferWaitEventFunc)getProc(device, "nvnCommandBufferWaitEvent");
        pfncpp_nvnCommandBufferSignalEvent = (CommandBufferSignalEventFunc)getProc(device, "nvnCommandBufferSignalEvent");
        pfncpp_nvnCommandBufferSetStencilCullCriteria = (CommandBufferSetStencilCullCriteriaFunc)getProc(device,
            "nvnCommandBufferSetStencilCullCriteria");
    }

} // namespace nvn
