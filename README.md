# Dawnwalker SDK

A compilable Unreal Engine 5.5.4 project with real, native C++ class declarations for *The Blood of Dawnwalker*, reconstructed from the game's UE4SS header dump and its actual plugin manifest, using UE4GameProjectGenerator.

Source and Plugins here mirror the real game's structure. First-party Rebel Wolves code lives in 39 proper plugin folders under Plugins/ (RebelAI, DialogueSystem, Population, and so on), and the core game modules, Dawnwalker itself plus everything under the Dogwood* namespace (24 modules in total), sit flat in Source/, same as in the shipped game. 23 third-party plugins the game uses for audio, upscaling, animation and a few smaller tools aren't reconstructed at all. They're declared as optional in the .uproject, so each one activates automatically if you install the real thing yourself, and is simply absent otherwise. The full list is below.

## Prerequisites

- Unreal Engine 5.5.4, installed from source or a matching binary build (this project's EngineAssociation is "5.5")
- Visual Studio 2022 with the "Game development with C++" workload

## Building it for the first time

This is a real project with dozens of modules, not a content pack, so the first build is a genuine compile and takes a while. Here's the path that actually works, tested end to end on a clean machine:

1. Clone the repo.
2. Try opening Dawnwalker.uproject directly. Since Binaries/ and Intermediate/ aren't tracked (see Notes below), the editor will offer to rebuild missing modules on first launch.
3. That in-editor rebuild is unreliable for a project this size and can fail outright with a generic "modules could not be compiled" message. When that happens:
   - Right click Dawnwalker.uproject and choose "Generate Visual Studio project files"
   - Open the generated Dawnwalker.sln in Visual Studio
   - Set the configuration to Development Editor / Win64 and build the DawnwalkerEditor target
4. Once that build succeeds, open Dawnwalker.uproject again. It should load straight in, with every reconstructed class available and all references intact.

Building through Visual Studio directly is the expected path here, not a fallback, plan on doing it that way rather than hoping the editor's own rebuild prompt gets you there.

## Optional third-party plugins

These 23 plugins are listed as optional in Dawnwalker.uproject but aren't included in this repo, they're commercial or vendor-specific tools the game licenses, not Rebel Wolves' own code. If a class you're working with needs one of these, it won't compile until you install the real plugin into your own engine; nothing else is affected. Names below match the plugin name as it appears in the .uproject.

| Plugin(s) | What it's for | Where to get it |
|---|---|---|
| Wwise, WwiseSoundEngine, WwiseNiagara | Audiokinetic Wwise, the game's audio middleware | [audiokinetic.com/download](https://www.audiokinetic.com/download/) |
| DLSS, StreamlineCore, StreamlineDLSSG, StreamlineReflex | NVIDIA DLSS upscaling and frame generation | [developer.nvidia.com/rtx/dlss](https://developer.nvidia.com/rtx/dlss) |
| XeSS | Intel XeSS upscaling | [github.com/GameTechDev/XeSSUnrealPlugin](https://github.com/GameTechDev/XeSSUnrealPlugin) |
| FSR4 | AMD FidelityFX Super Resolution 4 | [gpuopen.com/learn/ue-fsr](https://gpuopen.com/learn/ue-fsr/) |
| HoudiniEngine | SideFX Houdini Engine, procedural content tooling | [sidefx.com/products/houdini-engine/plug-ins/unreal-plug-in](https://www.sidefx.com/products/houdini-engine/plug-ins/unreal-plug-in/) |
| JALI | JALI Research automated lip sync and facial animation | [jaliresearch.com](https://jaliresearch.com/) |
| MetaHuman | Epic's MetaHuman plugin (Mesh to MetaHuman, MetaHuman Animator) | [fab.com listing](https://www.fab.com/listings/055a6486-ad17-4590-aa1e-261d47f7f041) |
| Simplygon | Automated mesh optimization and LOD generation | [simplygon.com/features/ue](https://www.simplygon.com/features/ue) |
| NetImgui | Remote Dear ImGui debug UI over the network | [github.com/sammyfreg/UnrealNetImgui](https://github.com/sammyfreg/UnrealNetImgui) |
| LiveLinkMvnPlugin | Movella (Xsens) MVN motion capture LiveLink source | [xsens.com/integrations/unreal-engine](https://www.xsens.com/integrations/unreal-engine) |
| MayaLiveLink | Autodesk Maya LiveLink source | [github.com/Autodesk/LiveLink](https://github.com/Autodesk/LiveLink) |
| ErrantBiomes, ErrantInstanceInteraction | Errant Photon's procedural biome scattering and instance-to-actor interaction tools | [errantphoton.com](https://www.errantphoton.com/) |
| KiBLII | Keyboard Layout-Independent Input | [fab.com listing](https://www.fab.com/listings/97745184-2b76-48c6-b29e-dc8d4f1df14b) |
| PBL_Database | Physically Based Lighting reference database | [fab.com listing](https://www.fab.com/listings/fb781de3-8366-43d1-8e2c-dde61fc6ec9f) |
| ScreenSpaceFogScattering | Post-process light scattering for Exponential Height Fog | [fab.com listing](https://www.fab.com/listings/a670ac7b-392f-4ce0-ab5f-87a441d5ebb7) |
| SkinnedDecalComponent | Decals that follow skeletal mesh bone deformation | [fab.com listing](https://www.fab.com/listings/7491af07-f541-493d-a78f-d7fa5d466a0d) |
| CamScout | Camera position bookmarking for the editor | [fab.com listing](https://www.fab.com/listings/85223f66-d5d2-4830-82df-32f11a983421) |

## Notes

- Content/Mods/ExampleUI/ is a small hand made example, a Blueprint widget and actor pair, showing that the SDK's classes actually resolve and work from Blueprints in the editor. It's the only asset content tracked in this repo; everything else under Content/ is ignored.
- Binaries/, Intermediate/, DerivedDataCache/, and Saved/ aren't tracked, they're regenerated by the build. That's normal, and exactly why a fresh clone needs the build step above rather than just opening and playing.
- Source/ and Plugins/ modules that match real engine plugins (GameplayAbilities, PCG, CommonUI, etc.) aren't duplicated here either. Those come from the engine install itself, via the Plugins array in Dawnwalker.uproject, the same mechanism used for the third-party plugins above, just without the "optional" flag since a stock engine install always has them.
- A handful of reconstructed methods are declarations only, where the dump couldn't recover a real function body (some interface overrides, for example). They compile but are stubbed, since UHT dumps can't recover implementation logic.
- This project builds cleanly (0 errors) against UE 5.5.4 as of the last commit, and has been confirmed to open and load correctly in the editor after a fresh clone and build. Treat it as a reference or base, and sanity check the specific classes you build against.
