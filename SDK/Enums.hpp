
enum class WaterWakeMode_t : std::uint32_t
{
   WATER_WAKE_NONE = 0,
   WATER_WAKE_IDLE = 1,
   WATER_WAKE_WALKING = 2,
   WATER_WAKE_RUNNING = 3,
   WATER_WAKE_WATER_OVERHEAD = 4
}

enum class MoveMountingAmount_t : std::uint32_t
{
   MOVE_MOUNT_NONE = 0,
   MOVE_MOUNT_LOW = 1,
   MOVE_MOUNT_HIGH = 2,
   MOVE_MOUNT_MAXCOUNT = 3
}

enum class AnimationProcessingType_t : std::uint32_t
{
   ANIMATION_PROCESSING_SERVER_SIMULATION = 0,
   ANIMATION_PROCESSING_CLIENT_SIMULATION = 1,
   ANIMATION_PROCESSING_CLIENT_PREDICTION = 2,
   ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 3,
   ANIMATION_PROCESSING_CLIENT_RENDER = 4,
   ANIMATION_PROCESSING_MAX = 5
}

enum class RenderPrimitiveType_t : std::uint32_t
{
   RENDER_PRIM_POINTS = 0,
   RENDER_PRIM_LINES = 1,
   RENDER_PRIM_LINES_WITH_ADJACENCY = 2,
   RENDER_PRIM_LINE_STRIP = 3,
   RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 4,
   RENDER_PRIM_TRIANGLES = 5,
   RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 6,
   RENDER_PRIM_TRIANGLE_STRIP = 7,
   RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 8,
   RENDER_PRIM_INSTANCED_QUADS = 9,
   RENDER_PRIM_HETEROGENOUS = 10,
   RENDER_PRIM_1_CONTROL_POINT_PATCHLIST = 11,
   RENDER_PRIM_2_CONTROL_POINT_PATCHLIST = 12,
   RENDER_PRIM_3_CONTROL_POINT_PATCHLIST = 13,
   RENDER_PRIM_4_CONTROL_POINT_PATCHLIST = 14,
   RENDER_PRIM_5_CONTROL_POINT_PATCHLIST = 15,
   RENDER_PRIM_6_CONTROL_POINT_PATCHLIST = 16,
   RENDER_PRIM_7_CONTROL_POINT_PATCHLIST = 17,
   RENDER_PRIM_8_CONTROL_POINT_PATCHLIST = 18,
   RENDER_PRIM_9_CONTROL_POINT_PATCHLIST = 19,
   RENDER_PRIM_10_CONTROL_POINT_PATCHLIST = 20,
   RENDER_PRIM_11_CONTROL_POINT_PATCHLIST = 21,
   RENDER_PRIM_12_CONTROL_POINT_PATCHLIST = 22,
   RENDER_PRIM_13_CONTROL_POINT_PATCHLIST = 23,
   RENDER_PRIM_14_CONTROL_POINT_PATCHLIST = 24,
   RENDER_PRIM_15_CONTROL_POINT_PATCHLIST = 25,
   RENDER_PRIM_16_CONTROL_POINT_PATCHLIST = 26,
   RENDER_PRIM_17_CONTROL_POINT_PATCHLIST = 27,
   RENDER_PRIM_18_CONTROL_POINT_PATCHLIST = 28,
   RENDER_PRIM_19_CONTROL_POINT_PATCHLIST = 29,
   RENDER_PRIM_20_CONTROL_POINT_PATCHLIST = 30,
   RENDER_PRIM_21_CONTROL_POINT_PATCHLIST = 31,
   RENDER_PRIM_22_CONTROL_POINT_PATCHLIST = 32,
   RENDER_PRIM_23_CONTROL_POINT_PATCHLIST = 33,
   RENDER_PRIM_24_CONTROL_POINT_PATCHLIST = 34,
   RENDER_PRIM_25_CONTROL_POINT_PATCHLIST = 35,
   RENDER_PRIM_26_CONTROL_POINT_PATCHLIST = 36,
   RENDER_PRIM_27_CONTROL_POINT_PATCHLIST = 37,
   RENDER_PRIM_28_CONTROL_POINT_PATCHLIST = 38,
   RENDER_PRIM_29_CONTROL_POINT_PATCHLIST = 39,
   RENDER_PRIM_30_CONTROL_POINT_PATCHLIST = 40,
   RENDER_PRIM_31_CONTROL_POINT_PATCHLIST = 41,
   RENDER_PRIM_32_CONTROL_POINT_PATCHLIST = 42,
   RENDER_PRIM_COMPUTE_SHADER = 43,
   RENDER_PRIM_TYPE_COUNT = 44
}

enum class ParticleOrientationSetMode_t : std::uint32_t
{
   PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0,
   PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 1
}

enum class JointMotion_t : std::uint32_t
{
   JOINT_MOTION_FREE = 0,
   JOINT_MOTION_LOCKED = 1,
   JOINT_MOTION_COUNT = 2
}

enum class CSWeaponSilencerType : std::uint32_t
{
   WEAPONSILENCER_NONE = 0,
   WEAPONSILENCER_DETACHABLE = 1,
   WEAPONSILENCER_INTEGRATED = 2
}

enum class RagdollPoseControl : std::uint32_t
{
   Absolute = 0,
   Relative = 1
}

enum class ParticleLightTypeChoiceList_t : std::uint32_t
{
   PARTICLE_LIGHT_TYPE_POINT = 0,
   PARTICLE_LIGHT_TYPE_SPOT = 1,
   PARTICLE_LIGHT_TYPE_FX = 2,
   PARTICLE_LIGHT_TYPE_CAPSULE = 3
}

enum class IKSolverType : std::uint32_t
{
   IKSOLVER_Perlin = 0,
   IKSOLVER_TwoBone = 1,
   IKSOLVER_Fabrik = 2,
   IKSOLVER_DogLeg3Bone = 3,
   IKSOLVER_CCD = 4,
   IKSOLVER_COUNT = 5
}

enum class VMixPannerType_t : std::uint32_t
{
   PANNER_TYPE_LINEAR = 0,
   PANNER_TYPE_EQUAL_POWER = 1
}

enum class AnimParamNetworkSetting : std::uint32_t
{
   Auto = 0,
   AlwaysNetwork = 1,
   NeverNetwork = 2
}

enum class ParticleRotationLockType_t : std::uint32_t
{
   PARTICLE_ROTATION_LOCK_NONE = 0,
   PARTICLE_ROTATION_LOCK_ROTATIONS = 1,
   PARTICLE_ROTATION_LOCK_NORMAL = 2
}

enum class ParticleFloatInputMode_t : std::int32_t
{
   PF_INPUT_MODE_INVALID = -1,
   PF_INPUT_MODE_CLAMPED = 0,
   PF_INPUT_MODE_LOOPED = 1,
   PF_INPUT_MODE_COUNT = 2
}

enum class ScriptedOnDeath_t : std::int32_t
{
   SS_ONDEATH_NOT_APPLICABLE = -1,
   SS_ONDEATH_UNDEFINED = 0,
   SS_ONDEATH_RAGDOLL = 1,
   SS_ONDEATH_ANIMATED_DEATH = 2
}

enum class ChatIgnoreType_t : std::uint32_t
{
   CHAT_IGNORE_NONE = 0,
   CHAT_IGNORE_ALL = 1,
   CHAT_IGNORE_TEAM = 2
}

enum class ParticleFloatType_t : std::int32_t
{
   PF_TYPE_INVALID = -1,
   PF_TYPE_LITERAL = 0,
   PF_TYPE_NAMED_VALUE = 1,
   PF_TYPE_RANDOM_UNIFORM = 2,
   PF_TYPE_RANDOM_BIASED = 3,
   PF_TYPE_COLLECTION_AGE = 4,
   PF_TYPE_ENDCAP_AGE = 5,
   PF_TYPE_CONTROL_POINT_COMPONENT = 6,
   PF_TYPE_CONTROL_POINT_CHANGE_AGE = 7,
   PF_TYPE_CONTROL_POINT_SPEED = 8,
   PF_TYPE_PARTICLE_DETAIL_LEVEL = 9,
   PF_TYPE_PARTICLE_NOISE = 10,
   PF_TYPE_PARTICLE_AGE = 11,
   PF_TYPE_PARTICLE_AGE_NORMALIZED = 12,
   PF_TYPE_PARTICLE_FLOAT = 13,
   PF_TYPE_PARTICLE_VECTOR_COMPONENT = 14,
   PF_TYPE_PARTICLE_SPEED = 15,
   PF_TYPE_PARTICLE_NUMBER = 16,
   PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 17,
   PF_TYPE_COUNT = 18
}

enum class ShardSolid_t : std::uint8_t
{
   SHARD_SOLID = 0,
   SHARD_DEBRIS = 1
}

enum class ParticleFloatMapType_t : std::int32_t
{
   PF_MAP_TYPE_INVALID = -1,
   PF_MAP_TYPE_DIRECT = 0,
   PF_MAP_TYPE_MULT = 1,
   PF_MAP_TYPE_REMAP = 2,
   PF_MAP_TYPE_REMAP_BIASED = 3,
   PF_MAP_TYPE_CURVE = 4,
   PF_MAP_TYPE_NOTCHED = 5,
   PF_MAP_TYPE_COUNT = 6
}

enum class ValueRemapperOutputType_t : std::uint32_t
{
   OutputType_AnimationCycle = 0,
   OutputType_RotationX = 1,
   OutputType_RotationY = 2,
   OutputType_RotationZ = 3
}

enum class VMixFilterType_t : std::int16_t
{
   FILTER_UNKNOWN = -1,
   FILTER_LOWPASS = 0,
   FILTER_HIGHPASS = 1,
   FILTER_BANDPASS = 2,
   FILTER_NOTCH = 3,
   FILTER_PEAKING_EQ = 4,
   FILTER_LOW_SHELF = 5,
   FILTER_HIGH_SHELF = 6,
   FILTER_ALLPASS = 7,
   FILTER_PASSTHROUGH = 8
}

enum class PFNoiseTurbulence_t : std::uint32_t
{
   PF_NOISE_TURB_NONE = 0,
   PF_NOISE_TURB_HIGHLIGHT = 1,
   PF_NOISE_TURB_FEEDBACK = 2,
   PF_NOISE_TURB_LOOPY = 3,
   PF_NOISE_TURB_CONTRAST = 4,
   PF_NOISE_TURB_ALTERNATE = 5
}

enum class PerformanceMode_t : std::uint32_t
{
   PM_NORMAL = 0,
   PM_NO_GIBS = 1,
   PM_FULL_GIBS = 2,
   PM_REDUCED_GIBS = 3
}

enum class Detail2Combo_t : std::int32_t
{
   DETAIL_2_COMBO_UNINITIALIZED = -1,
   DETAIL_2_COMBO_OFF = 0,
   DETAIL_2_COMBO_ADD = 1,
   DETAIL_2_COMBO_ADD_SELF_ILLUM = 2,
   DETAIL_2_COMBO_MOD2X = 3,
   DETAIL_2_COMBO_MUL = 4,
   DETAIL_2_COMBO_CROSSFADE = 5
}

enum class ParticleImpulseType_t : std::uint32_t
{
   IMPULSE_TYPE_NONE = 0,
   IMPULSE_TYPE_GENERIC = 1,
   IMPULSE_TYPE_ROPE = 2,
   IMPULSE_TYPE_EXPLOSION = 4,
   IMPULSE_TYPE_EXPLOSION_UNDERWATER = 8,
   IMPULSE_TYPE_PARTICLE_SYSTEM = 16
}

enum class VPhysXFlagEnum_t : std::uint32_t
{
   FLAG_IS_POLYSOUP_GEOMETRY = 1,
   FLAG_LEVEL_COLLISION = 16,
   FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32
}

enum class FootLockSubVisualization : std::uint32_t
{
   FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0,
   FOOTLOCKSUBVISUALIZATION_IKSolve = 1
}

enum class navproperties_t : std::uint32_t
{
   NAV_IGNORE = 1
}

enum class ChoiceBlendMethod : std::uint32_t
{
   SingleBlendTime = 0,
   PerChoiceBlendTimes = 1
}

enum class ChoiceChangeMethod : std::uint32_t
{
   OnReset = 0,
   OnCycleEnd = 1,
   OnResetOrCycleEnd = 2
}

enum class ScriptedMoveTo_t : std::uint32_t
{
   CINE_MOVETO_WAIT = 0,
   CINE_MOVETO_WALK = 1,
   CINE_MOVETO_RUN = 2,
   CINE_MOVETO_CUSTOM = 3,
   CINE_MOVETO_TELEPORT = 4,
   CINE_MOVETO_WAIT_FACING = 5
}

enum class BinaryNodeChildOption : std::uint32_t
{
   Child1 = 0,
   Child2 = 1
}

enum class AnimScriptType : std::int16_t
{
   ANIMSCRIPT_TYPE_INVALID = -1,
   ANIMSCRIPT_FUSE_GENERAL = 0,
   ANIMSCRIPT_FUSE_STATEMACHINE = 1,
   ANIMSCRIPT_EXPRTK = 2
}

enum class FuseVariableAccess_t : std::uint8_t
{
   WRITABLE = 0,
   READ_ONLY = 1
}

enum class IKTargetCoordinateSystem : std::uint32_t
{
   IKTARGETCOORDINATESYSTEM_WorldSpace = 0,
   IKTARGETCOORDINATESYSTEM_ModelSpace = 1,
   IKTARGETCOORDINATESYSTEM_COUNT = 2
}

enum class ParticleLightBehaviorChoiceList_t : std::uint32_t
{
   PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0,
   PARTICLE_LIGHT_BEHAVIOR_ROPE = 1,
   PARTICLE_LIGHT_BEHAVIOR_TRAILS = 2
}

enum class CompositeMaterialInputContainerSourceType_t : std::uint32_t
{
   CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0,
   CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 1,
   CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 2,
   CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 3,
   CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 4,
   CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 5
}

enum class SosActionSortType_t : std::uint32_t
{
   SOS_SORTTYPE_HIGHEST = 0,
   SOS_SORTTYPE_LOWEST = 1
}

enum class ParticlePinDistance_t : std::int32_t
{
   PARTICLE_PIN_DISTANCE_NONE = -1,
   PARTICLE_PIN_DISTANCE_NEIGHBOR = 0,
   PARTICLE_PIN_DISTANCE_FARTHEST = 1,
   PARTICLE_PIN_DISTANCE_FIRST = 2,
   PARTICLE_PIN_DISTANCE_LAST = 3,
   PARTICLE_PIN_DISTANCE_CENTER = 5,
   PARTICLE_PIN_DISTANCE_CP = 6,
   PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 7,
   PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 8,
   PARTICLE_PIN_SPEED = 9,
   PARTICLE_PIN_COLLECTION_AGE = 10
}

enum class SpriteCardTextureChannel_t : std::uint32_t
{
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 1,
   SPRITECARD_TEXTURE_CHANNEL_MIX_A = 2,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 3,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 4,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 5,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 6,
   SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 7,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 8,
   SPRITECARD_TEXTURE_CHANNEL_MIX_R = 9,
   SPRITECARD_TEXTURE_CHANNEL_MIX_G = 10,
   SPRITECARD_TEXTURE_CHANNEL_MIX_B = 11,
   SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 12,
   SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 13,
   SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 14
}

enum class VertJustification_e : std::uint32_t
{
   VERT_JUSTIFICATION_TOP = 0,
   VERT_JUSTIFICATION_CENTER = 1,
   VERT_JUSTIFICATION_BOTTOM = 2,
   VERT_JUSTIFICATION_NONE = 3
}

enum class RumbleEffect_t : std::int32_t
{
   RUMBLE_INVALID = -1,
   RUMBLE_STOP_ALL = 0,
   RUMBLE_PISTOL = 1,
   RUMBLE_357 = 2,
   RUMBLE_SMG1 = 3,
   RUMBLE_AR2 = 4,
   RUMBLE_SHOTGUN_SINGLE = 5,
   RUMBLE_SHOTGUN_DOUBLE = 6,
   RUMBLE_AR2_ALT_FIRE = 7,
   RUMBLE_RPG_MISSILE = 8,
   RUMBLE_CROWBAR_SWING = 9,
   RUMBLE_AIRBOAT_GUN = 10,
   RUMBLE_JEEP_ENGINE_LOOP = 11,
   RUMBLE_FLAT_LEFT = 12,
   RUMBLE_FLAT_RIGHT = 13,
   RUMBLE_FLAT_BOTH = 14,
   RUMBLE_DMG_LOW = 15,
   RUMBLE_DMG_MED = 16,
   RUMBLE_DMG_HIGH = 17,
   RUMBLE_FALL_LONG = 18,
   RUMBLE_FALL_SHORT = 19,
   RUMBLE_PHYSCANNON_OPEN = 20,
   RUMBLE_PHYSCANNON_PUNT = 21,
   RUMBLE_PHYSCANNON_LOW = 22,
   RUMBLE_PHYSCANNON_MEDIUM = 23,
   RUMBLE_PHYSCANNON_HIGH = 24,
   NUM_RUMBLE_EFFECTS = 25
}

enum class ChoreoState_t : std::uint32_t
{
   STATE_PRE_SCRIPT = 0,
   STATE_WAIT_FOR_SCRIPT = 1,
   STATE_WALK_TO_MARK = 2,
   STATE_SYNCHRONIZE_SCRIPT = 3,
   STATE_PLAY_SCRIPT = 4,
   STATE_PLAY_SCRIPT_POST_IDLE = 5,
   STATE_PLAY_SCRIPT_POST_IDLE_DONE = 6
}

enum class ShatterGlassStressType : std::uint8_t
{
   SHATTERGLASS_BLUNT = 0,
   SHATTERGLASS_BALLISTIC = 1,
   SHATTERGLASS_PULSE = 2,
   SHATTERDRYWALL_CHUNKS = 3,
   SHATTERGLASS_EXPLOSIVE = 4
}

enum class attributeprovidertypes_t : std::uint32_t
{
   PROVIDER_GENERIC = 0,
   PROVIDER_WEAPON = 1
}

enum class ParticleLightnintBranchBehavior_t : std::uint32_t
{
   PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0,
   PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 1
}

enum class MorphBundleType_t : std::uint32_t
{
   MORPH_BUNDLE_TYPE_NONE = 0,
   MORPH_BUNDLE_TYPE_POSITION_SPEED = 1,
   MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 2,
   MORPH_BUNDLE_TYPE_COUNT = 3
}

enum class TRAIN_CODE : std::uint32_t
{
   TRAIN_SAFE = 0,
   TRAIN_BLOCKING = 1,
   TRAIN_FOLLOWING = 2
}

enum class FootstepLandedFootSoundType_t : std::uint32_t
{
   FOOTSOUND_Left = 0,
   FOOTSOUND_Right = 1,
   FOOTSOUND_UseOverrideSound = 2
}

enum class ParticleAttachment_t : std::int32_t
{
   PATTACH_INVALID = -1,
   PATTACH_ABSORIGIN = 0,
   PATTACH_ABSORIGIN_FOLLOW = 1,
   PATTACH_CUSTOMORIGIN = 2,
   PATTACH_CUSTOMORIGIN_FOLLOW = 3,
   PATTACH_POINT = 4,
   PATTACH_POINT_FOLLOW = 5,
   PATTACH_EYES_FOLLOW = 6,
   PATTACH_OVERHEAD_FOLLOW = 7,
   PATTACH_WORLDORIGIN = 8,
   PATTACH_ROOTBONE_FOLLOW = 9,
   PATTACH_RENDERORIGIN_FOLLOW = 10,
   PATTACH_MAIN_VIEW = 11,
   PATTACH_WATERWAKE = 12,
   PATTACH_CENTER_FOLLOW = 13,
   PATTACH_CUSTOM_GAME_STATE_1 = 14,
   PATTACH_HEALTHBAR = 15,
   MAX_PATTACH_TYPES = 16
}

enum class ParticleOrientationChoiceList_t : std::uint32_t
{
   PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0,
   PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 1,
   PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 2,
   PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 3,
   PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 4,
   PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 5
}

enum class Comparison_t : std::uint32_t
{
   COMPARISON_EQUALS = 0,
   COMPARISON_NOT_EQUALS = 1,
   COMPARISON_GREATER = 2,
   COMPARISON_GREATER_OR_EQUAL = 3,
   COMPARISON_LESS = 4,
   COMPARISON_LESS_OR_EQUAL = 5,
   COMPARISON_COUNT = 6
}

enum class Class_T : std::uint32_t
{
   CLASS_NONE = 0,
   CLASS_PLAYER = 1,
   CLASS_PLAYER_ALLY = 2,
   CLASS_DZ_DRONE = 3,
   CLASS_DZ_SPAWN_CHOPPER = 4,
   CLASS_BOMB = 5,
   CLASS_FOOT_CONTACT_SHADOW = 6,
   CLASS_WEAPON_VIEWMODEL = 7,
   NUM_CLASSIFY_CLASSES = 8
}

enum class DebugOverlayBits_t : std::int64_t
{
   OVERLAY_TEXT_BIT = 1,
   OVERLAY_NAME_BIT = 2,
   OVERLAY_BBOX_BIT = 4,
   OVERLAY_PIVOT_BIT = 8,
   OVERLAY_MESSAGE_BIT = 16,
   OVERLAY_ABSBOX_BIT = 32,
   OVERLAY_RBOX_BIT = 64,
   OVERLAY_SHOW_BLOCKSLOS = 128,
   OVERLAY_ATTACHMENTS_BIT = 256,
   OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 512,
   OVERLAY_INTERPOLATED_PIVOT_BIT = 1024,
   OVERLAY_SKELETON_BIT = 2048,
   OVERLAY_INTERPOLATED_SKELETON_BIT = 4096,
   OVERLAY_TRIGGER_BOUNDS_BIT = 8192,
   OVERLAY_HITBOX_BIT = 16384,
   OVERLAY_INTERPOLATED_HITBOX_BIT = 32768,
   OVERLAY_AUTOAIM_BIT = 65536,
   OVERLAY_NPC_SELECTED_BIT = 131072,
   OVERLAY_JOINT_INFO_BIT = 262144,
   OVERLAY_NPC_ROUTE_BIT = 524288,
   OVERLAY_NPC_TRIANGULATE_BIT = 1048576,
   OVERLAY_NPC_ZAP_BIT = 2097152,
   OVERLAY_NPC_ENEMIES_BIT = 4194304,
   OVERLAY_NPC_CONDITIONS_BIT = 8388608,
   OVERLAY_NPC_COMBAT_BIT = 16777216,
   OVERLAY_NPC_TASK_BIT = 33554432,
   OVERLAY_NPC_BODYLOCATIONS = 67108864,
   OVERLAY_NPC_VIEWCONE_BIT = 134217728,
   OVERLAY_NPC_KILL_BIT = 268435456,
   OVERLAY_WC_CHANGE_ENTITY = 536870912,
   OVERLAY_BUDDHA_MODE = 1073741824,
   OVERLAY_NPC_STEERING_REGULATIONS = -2147483648,
   OVERLAY_NPC_TASK_TEXT_BIT = 0,
   OVERLAY_PROP_DEBUG = 0,
   OVERLAY_NPC_RELATION_BIT = 0,
   OVERLAY_VIEWOFFSET = 0,
   OVERLAY_VCOLLIDE_WIREFRAME_BIT = 0,
   OVERLAY_NPC_NEAREST_NODE_BIT = 0,
   OVERLAY_ACTORNAME_BIT = 0,
   OVERLAY_NPC_CONDITIONS_TEXT_BIT = 0
}

enum class Reason : std::uint32_t
{
   QUEST_NONINITIALIZED = 0,
   QUEST_OK = 1,
   QUEST_NOT_ENOUGH_PLAYERS = 2,
   QUEST_WARMUP = 3,
   QUEST_NOT_CONNECTED_TO_STEAM = 4,
   QUEST_NONOFFICIAL_SERVER = 5,
   QUEST_NO_ENTITLEMENT = 6,
   QUEST_NO_QUEST = 7,
   QUEST_PLAYER_IS_BOT = 8,
   QUEST_WRONG_MAP = 9,
   QUEST_WRONG_MODE = 10,
   QUEST_NOT_SYNCED_WITH_SERVER = 11,
   QUEST_REASON_MAX = 12
}

enum class DampingSpeedFunction : std::uint32_t
{
   NoDamping = 0,
   Constant = 1,
   Spring = 2
}

enum class ShatterDamageCause : std::uint8_t
{
   SHATTERDAMAGE_BULLET = 0,
   SHATTERDAMAGE_MELEE = 1,
   SHATTERDAMAGE_THROWN = 2,
   SHATTERDAMAGE_SCRIPT = 3,
   SHATTERDAMAGE_EXPLOSIVE = 4
}

enum class ModifyDamageReturn_t : std::uint32_t
{
   CONTINUE_TO_APPLY_DAMAGE = 0,
   ABORT_DO_NOT_APPLY_DAMAGE = 1
}

enum class ParticleColorBlendType_t : std::uint32_t
{
   PARTICLE_COLOR_BLEND_MULTIPLY = 0,
   PARTICLE_COLOR_BLEND_MULTIPLY2X = 1,
   PARTICLE_COLOR_BLEND_DIVIDE = 2,
   PARTICLE_COLOR_BLEND_ADD = 3,
   PARTICLE_COLOR_BLEND_SUBTRACT = 4,
   PARTICLE_COLOR_BLEND_MOD2X = 5,
   PARTICLE_COLOR_BLEND_SCREEN = 6,
   PARTICLE_COLOR_BLEND_MAX = 7,
   PARTICLE_COLOR_BLEND_MIN = 8,
   PARTICLE_COLOR_BLEND_REPLACE = 9,
   PARTICLE_COLOR_BLEND_AVERAGE = 10,
   PARTICLE_COLOR_BLEND_NEGATE = 11,
   PARTICLE_COLOR_BLEND_LUMINANCE = 12
}

enum class CSWeaponCategory : std::uint32_t
{
   WEAPONCATEGORY_OTHER = 0,
   WEAPONCATEGORY_MELEE = 1,
   WEAPONCATEGORY_SECONDARY = 2,
   WEAPONCATEGORY_SMG = 3,
   WEAPONCATEGORY_RIFLE = 4,
   WEAPONCATEGORY_HEAVY = 5,
   WEAPONCATEGORY_COUNT = 6
}

enum class CSPlayerBlockingUseAction_t : std::uint32_t
{
   k_CSPlayerBlockingUseAction_None = 0,
   k_CSPlayerBlockingUseAction_DefusingDefault = 1,
   k_CSPlayerBlockingUseAction_DefusingWithKit = 2,
   k_CSPlayerBlockingUseAction_HostageGrabbing = 3,
   k_CSPlayerBlockingUseAction_HostageDropping = 4,
   k_CSPlayerBlockingUseAction_OpeningSafe = 5,
   k_CSPlayerBlockingUseAction_EquippingParachute = 6,
   k_CSPlayerBlockingUseAction_EquippingHeavyArmor = 7,
   k_CSPlayerBlockingUseAction_EquippingContract = 8,
   k_CSPlayerBlockingUseAction_EquippingTabletUpgrade = 9,
   k_CSPlayerBlockingUseAction_TakingOffHeavyArmor = 10,
   k_CSPlayerBlockingUseAction_PayingToOpenDoor = 11,
   k_CSPlayerBlockingUseAction_CancelingSpawnRappelling = 12,
   k_CSPlayerBlockingUseAction_EquippingExoJump = 13,
   k_CSPlayerBlockingUseAction_PickingUpBumpMine = 14,
   k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 15,
   k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 16,
   k_CSPlayerBlockingUseAction_MaxCount = 17
}

enum class SpriteCardPerParticleScale_t : std::uint32_t
{
   SPRITECARD_TEXTURE_PP_SCALE_NONE = 0,
   SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 1,
   SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 2,
   SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 3,
   SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 4,
   SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 5,
   SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 6,
   SPRITECARD_TEXTURE_PP_SCALE_ROLL = 7,
   SPRITECARD_TEXTURE_PP_SCALE_YAW = 8,
   SPRITECARD_TEXTURE_PP_SCALE_PITCH = 9,
   SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 10,
   SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 11,
   SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 12,
   SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 13
}
