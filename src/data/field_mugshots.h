static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

//normal mughots
static const u32 sFieldMugshotGfx_MudkipNormal[] = INCBIN_U32("graphics/field_mugshots/mudkip_normal.4bpp.lz");

static const u16 sFieldMugshotPal_MudkipNormal[] = INCBIN_U16("graphics/field_mugshots/mudkip_normal.gbapal");

//happy

//elated

//angry

//sad


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
	    },
    },
    
};