# Dawnwalker SDK

A compilable Unreal Engine 5.5.4 project with real, native C++ class declarations for *The Blood of Dawnwalker*, reconstructed from the game's UE4SS UHTHeaderDump using UE4GameProjectGenerator.

Everything tracked here is source only: Source/, Config/, and Dawnwalker.uproject. No build artifacts, no derived caches, no unrelated local plugins. It builds cleanly against a real UE 5.5 install and gives you actual classes to reference from C++ or Blueprints, so you're not stuck reconstructing them at runtime every session.

## Using this as a mod base

There are two ways to use it, depending on what you've already got going.

1. Merge it into a blank project. Create a new blank UE 5.5.4 C++ project, copy this repo's Source/ folder over (and Config/ too if you want matching renderer/input defaults), then merge the Modules and Plugins arrays from this repo's Dawnwalker.uproject into your own and regenerate project files. Good if you already have a project set up and just want the class definitions.

2. Use this repo directly. Clone it, open Dawnwalker.uproject, and build. You get a ready to go project with every reconstructed Dawnwalker class available right away, and you can put your own mod content (Blueprints, new C++ modules, assets) straight in here.

Content/Mods/ExampleUI/ is a small hand made example, a Blueprint widget and actor pair, showing that the SDK's classes actually resolve and work from Blueprints in the editor. Use it as a starting point for your own mod content folder. It's the only asset content tracked in this repo; everything else under Content/ is ignored (more on that below).

## Notes

- Source/ modules that match real engine plugins (GameplayAbilities, PCG, CommonUI, etc.) aren't duplicated here. Those come from the engine install itself, via the Plugins array in Dawnwalker.uproject.
- A handful of reconstructed methods are declarations only, where the dump couldn't recover a real function body (some interface overrides, for example). They compile but are stubbed, since UHT dumps can't recover implementation logic.
- This project builds cleanly (0 errors) against UE 5.5.4 as of the last commit, but it hasn't been exhaustively tested at runtime. Treat it as a reference or base, and sanity check the specific classes you build against.
