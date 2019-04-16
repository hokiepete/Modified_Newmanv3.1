# Modified_Newmanv3.1
This is a version of Newmanv3.1 which has been lazily hacked by myself to output the Eigenvector of the Cauchy-Green tensor associated with its largest Eigenvalue. The Eigenvector is output in the same array as the FTLE and is mixed in along the x-axis (j-index). The workflow for this application is:
Run Newmanv3.1 as usual -> run raw2mat.m under scripts -> separate FTLE from Xi.
The final step can be done, in 2D
FTLE = F(:,1:3:end,:)
Xi_1 = F(:,2:3:end,:)
Xi_2 = F(:,3:3:end,:)

and 3D
FTLE = F(:,1:4:end,:,:)
Xi_1 = F(:,2:4:end,:,:)
Xi_2 = F(:,3:4:end,:,:)
Xi_3 = F(:,4:4:end,:,:)
