### What is LVM?

LVM stands for Logical Volume Management. It is a system of managing logical volumes, or filesystems, that is much more advanced and flexible than the traditional method of partitioning a disk into one or more segments and formatting that partition with a filesystem.

### The Basics

**There are 3 concepts that LVM manages:**
- Volume Group
- Physical Volumes
- Logical Volumes

A *Volume Group* is a named collection of physical and logical volumes. Typical systems only need one Volume Group to contain all of the physical and logical volumes on the system, and I like to name mine after the name of the machine. Physical Volumes correspond to disks; they are block devices that provide the space to store logical volumes. Logical volumes correspond to partitions: they hold a filesystem. Unlike partitions though, logical volumes get names rather than numbers, they can span across multiple disks, and do not have to be physically contiguous.