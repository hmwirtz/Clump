//	
//	
//	create a reuseable function to iterate through headers, read the  section type, size and version. 
//	Count how many total headers, how many of each type etc.
//	
//	Add check if value is 0 padd an extra zero to prevent problems with misaligned bytes in 12 byte headers
//	This is because if value is 0 it only takes up 1 byte but needs 2 bytes to complete the 12 byte header
//	
//	
//	
//	



	struct sectionHeader
	{
		unsigned int sectionDataType[4];
		unsigned int sectionDataSize[4];
		unsigned int sectionDataVersion[4];

	} Header;

	struct sectionTypeDefine
	{
		unsigned int rw_CLUMP			= 0x10;
		unsigned int rw_STRUCT			= 0x010;
		unsigned int rw_FRAME_LIST		= 0x0E0;
		unsigned int rw_EXTENSION		= 0x030;
		unsigned int rw_HANIM_PLUGIN	= 0x11E0;
		unsigned int rw_GEOMETRY		= 0x0F0;
		unsigned int rw_MATERIAL_LIST	= 0x08;
		unsigned int rw_MATERIAL		= 0x070;
		unsigned int rw_TEXTURE			= 0x06;
		unsigned int rw_STRING			= 0x02;
		unsigned int rw_USRDATAPLGN		= 0x11F0;
		unsigned int rw_BINMESHPLGN		= 0x50E0;
		unsigned int rw_SKINPLGN		= 0x1160;
		unsigned int rw_ATOMIC			= 0x14;
		unsigned int rw_RIGHT2RENDER	= 0x1F;
		unsigned int rw_CAMERA			= 0x05;

	};
