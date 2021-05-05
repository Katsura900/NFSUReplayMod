#include "stdafx.h"
#include <d3d9.h>
#include <D3dx9core.h>

// D3DERR_DEVICELOST
enum IDirect3DDevice9_VmethodsNums {
	eQueryInterface,
	eAddRef,
	eRelease,
	eTestCooperativeLevel,
	eGetAvailableTextureMem,
	eEvictManagedResources,
	eGetDirect3D,
	eGetDeviceCaps,
	eGetDisplayMode,
	eGetCreationParameters,
	eSetCursorProperties,
	eSetCursorPosition,
	eShowCursor,
	eCreateAdditionalSwapChain,
	eGetSwapChain,
	eGetNumberOfSwapChains,
	eReset,
	ePresent,
	eGetBackBuffer,
	eGetRasterStatus,
	eSetDialogBoxMode,
	eSetGammaRamp,
	eGetGammaRamp,
	eCreateTexture,
	eCreateVolumeTexture,
	eCreateCubeTexture,
	eCreateVertexBuffer,
	eCreateIndexBuffer,
	eCreateRenderTarget,
	eCreateDepthStencilSurface,
	eUpdateSurface,
	eUpdateTexture,
	eGetRenderTargetData,
	eGetFrontBufferData,
	eStretchRect,
	eColorFill,
	eCreateOffscreenPlainSurface,
	eSetRenderTarget,
	eGetRenderTarget,
	eSetDepthStencilSurface,
	eGetDepthStencilSurface,
	eBeeeginScene,
	eEendScene,
	eCelear,
	eSeetTransform,
	eGeetTransform,
	eMeultiplyTransform,
	eSeetViewport,
	eGeetViewport,
	eSeetMaterial,
	eGeetMaterial,
	eSeetLight,
	eGeetLight,
	eLightEnable,
	eeGetLightEnable,
	eeSetClipPlane,
	eGetClipPlane,
	eSetRenderState,
	eGetRenderState,
	eCreateStateBlock,
	eBeginStateBlock,
	eEndStateBlock,
	eSetClipStatus,
	eGetClipStatus,
	eGetTexture,
	eSetTexture,
	eGetTextureStageState,
	eSetTextureStageState,
	eGetSamplerState,
	eSetSamplerState,
	eValidateDevice,
	eSetPaletteEntries,
	eGetPaletteEntries,
	eSetCurrentTexturePalette,
	eGetCurrentTexturePalette,
	eSetScissorRect,
	eGetScissorRect,
	eSetSoftwareVertexProcessing,
	eGetSoftwareVertexProcessing,
	eSetNPatchMode,
	eGetNPatchMode,
	eDrawPrimitive,
	eDrawIndexedPrimitive,
	eDrawPrimitiveUP,
	eeDrawIndexedPrimitiveUP,
	eProcessVertices,
	eCreateVertexDeclaration,
	eSetVertexDeclaration,
	eGetVertexDeclaration,
	eSetFVF,
	eGetFVF,
	eCreateVertexShader,
	eSetVertexShader,
	eGetVertexShader,
	eSetVertexShaderConstantF,
	eGetVertexShaderConstantF,
	eSetVertexShaderConstantI,
	eSetVertexShaderConstantB,
	eGetVertexShaderConstantB,
	eSetStreamSource,
	eGetStreamSource,
	eSetStreamSourceFreq,
	eGetStreamSourceFreq,
	eSetIndices,
	eGetIndices,
	eCreatePixelShader,
	eSetPixelShader,
	eGetPixelShader,
	eSetPixelShaderConstantF,
	eGetPixelShaderConstantF,
	eSetPixelShaderConstantI,
	eGetPixelShaderConstantI,
	eSetPixelShaderConstantB,
	eGetPixelShaderConstantB,
	eDrawRectPatch,
	eDrawTriPatch,
	eDeletePatch,
	eCreateQuery
};

typedef HRESULT(_stdcall *T_Real_IDirect3DDevice9_EndScene)(IDirect3DDevice9* d3ddevice);

void D3DDrawText(const char* str, LPRECT pos);
void D3DInitFont(IDirect3DDevice9 *pDevice);
void D3DReleaseFont();