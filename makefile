
# Directory paths
SRCDIR = src
OBJDIR = obj
BINDIR = bin

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Target and objects
TARGET = test
OBJECTS = $(OBJDIR)/player.o $(OBJDIR)/round.o $(OBJDIR)/testing.o

.PHONY: all clean veryclean

# Build executable
all: $(BINDIR)/$(TARGET)

# Make sure directory paths exist
$(OBJDIR) $(BINDIR):
	mkdir -p $@

# Link
$(BINDIR)/$(TARGET) : $(OBJECTS) | $(BINDIR)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(BINDIR)/$(TARGET)

# Compile
$(OBJDIR)/%.o : $(SRCDIR)/%.cc | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Dependencies
$(OBJDIR)/player.o : $(SRCDIR)/player.cc $(SRCDIR)/player.h
$(OBJDIR)/round.o : $(SRCDIR)/round.cc $(SRCDIR)/round.h
$(OBJDIR)/testing.o : $(SRCDIR)/testing.cc

# Clean
clean:
	@rm -f $(OBJDIR)/*.o
veryclean: clean
	@rm -f $(BINDIR)/$(TARGET)