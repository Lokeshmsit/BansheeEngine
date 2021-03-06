using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace BansheeEngine
{
	/** @addtogroup Rendering
	 *  @{
	 */

	/// <summary>
	/// Planned usage for the mesh. These options usually affect performance and you should specify static if you don't plan 
	/// on modifying the mesh often, otherwise specify dynamic.
	/// </summary>
	public enum MeshUsage
	{
		/// <summary>Specify for a mesh that is not often updated from the CPU.</summary>
		Static = 0,
		/// <summary>
		/// All mesh data will also be cached in CPU memory, making it available for fast read access from the CPU. Can be  
		/// combined with other usage flags.
		/// </summary>
		CPUCached = 4096,
		/// <summary>Specify for a mesh that is often updated from the CPU.</summary>
		Dynamic = 1
	}

	/** @} */
}
