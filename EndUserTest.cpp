#include "DataRecords.h"

int main()
{
    Records record;

    // Step 1: Read data from a text file
    record.readData();

    // Step 2: Write the data to a file
    record.writeData();

    // Step 3: Read the data back and display it
    record.readBinData();

    // Step 4: Allow the user to modify a record
    record.modifyRecord();

    // Step 5: Display the updated data
    record.readBinData();

    return 0;
}
