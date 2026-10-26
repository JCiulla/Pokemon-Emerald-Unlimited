static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u32 sFieldMugshotGfx_MudkipNormal[] = INCBIN_U32("graphics/field_mugshots/mudkip/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_RoxanneNormal[] = INCBIN_U32("graphics/field_mugshots/roxanne/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_BrawlyNormal[] = INCBIN_U32("graphics/field_mugshots/brawly/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_FlanneryNormal[] = INCBIN_U32("graphics/field_mugshots/flannery/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_WinonaNormal[] = INCBIN_U32("graphics/field_mugshots/winona/normal.4bpp.lz");

static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");
static const u16 sFieldMugshotPal_MudkipNormal[] = INCBIN_U16("graphics/field_mugshots/mudkip/normal.gbapal");
static const u16 sFieldMugshotPal_RoxanneNormal[] = INCBIN_U16("graphics/field_mugshots/roxanne/normal.gbapal");
static const u16 sFieldMugshotPal_BrawlyNormal[] = INCBIN_U16("graphics/field_mugshots/brawly/normal.gbapal");
static const u16 sFieldMugshotPal_FlanneryNormal[] = INCBIN_U16("graphics/field_mugshots/flannery/normal.gbapal");
static const u16 sFieldMugshotPal_WinonaNormal[] = INCBIN_U16("graphics/field_mugshots/winona/normal.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
        },
    },

    [MUGSHOT_MUDKIP] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_MudkipNormal,
            .pal = sFieldMugshotPal_MudkipNormal,
        }
    },

    [MUGSHOT_ROXANNE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_RoxanneNormal,
            .pal = sFieldMugshotPal_RoxanneNormal,
        }
    },

    [MUGSHOT_BRAWLY] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_BrawlyNormal,
            .pal = sFieldMugshotPal_BrawlyNormal,
        }
    },

    [MUGSHOT_FLANNERY] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_FlanneryNormal,
            .pal = sFieldMugshotPal_FlanneryNormal,
        }
    },

    [MUGSHOT_WINONA] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_WinonaNormal,
            .pal = sFieldMugshotPal_WinonaNormal,
        }
    },
};