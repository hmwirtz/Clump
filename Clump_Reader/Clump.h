


struct sectionHeader
{
	sectionType		sectionDatatype;
	unsigned int	sectionDataSize[4];
	sectionVersion	sectionDataVersion;

} Header; 

struct Clump
{
	
};

enum sectionType
{
	rw_CLUMP			= 0x10000000,
	rw_STRUCT			= 0x01000000,
	rw_FRAME_LIST		= 0x0E000000,
	rw_EXTENSION		= 0x03000000,
	rw_HANIM_PLUGIN		= 0x11E00000,
	rw_GEOMETRY			= 0x0F000000,
	rw_MATERIAL_LIST	= 0x08000000,
	rw_MATERIAL			= 0x07000000,
	rw_TEXTURE			= 0x06000000,
	rw_STRING			= 0x02000000,
	rw_USRDATAPLGN		= 0x11F00000,
	rw_BINMESHPLGN		= 0x50E00000,
	rw_SKINPLGN			= 0x11600000,
	rw_ATOMIC			= 0x14000000,
	rw_RIGHT2RENDER		= 0x1F000000,
	rw_CAMERA			= 0x05000000


};

enum sectionVersion
{
	rw_Version = 0x6500021C
};

enum sectionSize
{
	rw_Section_Size
};