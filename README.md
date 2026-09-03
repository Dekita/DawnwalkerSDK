# Dawnwalker SDK (reconstructed source project)

This is a compilable Unreal Engine 5.5.4 project containing the real, native
C++ class declarations for *The Blood of Dawnwalker*, reconstructed from the
game's UE4SS `UHTHeaderDump` via
[UE4GameProjectGenerator](https://github.com/Archengius/UE4GameProjectGenerator).

Everything tracked in this repo is source-only (`Source/`, `Config/`,
`Dawnwalker.uproject`) — no build artifacts, no derived caches, no unrelated
locally-installed plugins. It builds cleanly against a real UE 5.5 engine
install and gives you real classes to reference from C++ or Blueprints,
instead of relying on a runtime tool to reconstruct them each session.

## Using this as a mod base

Two ways to use it, depending on what you're doing:

1. **Merge into a blank project.** Create a new blank UE 5.5.4 C++ project,
   then copy this repo's `Source/` folder (and `Config/` if you want the
   matching renderer/input defaults) into it, merge the `Modules` and
   `Plugins` arrays from this repo's `Dawnwalker.uproject` into your own
   `.uproject`, and regenerate project files. Good if you already have your
   own project set up and just want the class definitions.

2. **Use this repo directly.** Clone it, open `Dawnwalker.uproject`, and
   build. This gives you a ready-to-go project with every reconstructed
   Dawnwalker class available immediately — put your own mod content
   (Blueprints, new C++ modules, assets) directly in here.

`Content/Mods/ExampleUI/` is a small hand-authored example (a Blueprint
widget + actor pair) showing that the SDK's classes resolve and work
correctly from Blueprints in-editor — use it as a starting point for your
own mod content folder. It's the only asset content tracked in this repo;
everything else under `Content/` is ignored (see Notes below).

## Notes

- `Source/` modules that match real engine plugins (GameplayAbilities, PCG,
  CommonUI, etc.) are *not* duplicated here — those come from the engine
  install itself via the `Plugins` array in `Dawnwalker.uproject`.
- A handful of reconstructed methods are declarations only where the dump
  could not recover a real function body (e.g. some interface overrides) —
  these compile but are stubbed, since UHT dumps can't recover implementation
  logic.
- This project builds cleanly (0 errors) against UE 5.5.4 as of the last
  commit, but hasn't been exhaustively verified at runtime — treat it as a
  reference/base, and sanity-check the specific classes you build against.
